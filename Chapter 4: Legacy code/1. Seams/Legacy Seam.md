#### Legacy Seam
- **When working with a legacy system it is valuable to identify and create seams: places where we can alter the behavior of the system without editing source code.**
- Once we've found a seam, we can use it to break dependencies to simplify testing, insert probes to gain observability, and redirect program flow to new modules as part of legacy displacement.
- Michael Feathers coined the term “seam” in the context of legacy systems in his book Working Effectively with Legacy Code. His definition: “a seam is a place where you can alter behavior in your program without editing in that place”.
  > Here's an example of where a seam would be handy. Imagine some code to calculate the price of an order.
```typescript
// TypeScript
export async function calculatePrice(order:Order) {
  const itemPrices = order.items.map(i => calculateItemPrice(i))
  const basePrice = itemPrices.reduce((acc, i) => acc + i.price, 0)
  const discount = calculateDiscount(order)
  const shipping = await calculateShipping(order)
  const adjustedShipping = applyShippingDiscounts(order, shipping)
  return basePrice + discount + adjustedShipping
}
```
- The function calculateShipping hits an external service, which is slow (and expensive), so we don't want to hit it when testing. Instead we want to introduce a stub, so we can provide a canned and deterministic response for each of the testing scenarios.
- Different tests may need different responses from the function, but we can't edit the code of `calculatePrice` inside the test. Thus we need to introduce a seam around the call to `calculateShipping`, something that will allow our test to redirect the call to the stub.
> One way to do this is to pass the function for calculateShipping as a parameter
```typescript
export async function calculatePrice(order:Order, shippingFn: (o:Order) => Promise<number>) {
  const itemPrices = order.items.map(i => calculateItemPrice(i))
  const basePrice = itemPrices.reduce((acc, i) => acc + i.price, 0)
  const discount = calculateDiscount(order)
  const shipping = await shippingFn(order)
  const adjustedShipping = applyShippingDiscounts(order, shipping)
  return basePrice + discount + adjustedShipping
}
```
