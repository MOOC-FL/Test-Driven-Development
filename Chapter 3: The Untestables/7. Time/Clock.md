
## Class Overview
| **Class** | `java.time.Clock` |
|-----------|------------------|
| **Package** | `java.time` |
| **Superclass** | `java.lang.Object` |
| **Purpose** | Provides access to current instant, date, and time using a time-zone |

## Factory Methods

| Method | Description | Return Type |
|--------|-------------|-------------|
| `systemUTC()` | System clock using UTC time-zone | `Clock` |
| `systemDefaultZone()` | System clock using default time-zone | `Clock` |
| `system(ZoneId zone)` | System clock with specified time-zone | `Clock` |
| `tickMillis(ZoneId zone)` | Clock ticking in whole milliseconds | `Clock` |
| `tickSeconds(ZoneId zone)` | Clock ticking in whole seconds | `Clock` |
| `tickMinutes(ZoneId zone)` | Clock ticking in whole minutes | `Clock` |
| `tick(Clock baseClock, Duration tickDuration)` | Clock truncated to specified duration | `Clock` |
| `fixed(Instant fixedInstant, ZoneId zone)` | Clock returning same instant (testing) | `Clock` |
| `offset(Clock baseClock, Duration offsetDuration)` | Clock with added offset duration | `Clock` |

## Abstract Methods

| Method | Description |
|--------|-------------|
| `getZone()` | Returns time-zone used for date/time conversion |
| `withZone(ZoneId zone)` | Returns copy with different time-zone |
| `instant()` | Returns current instant of the clock |

## Concrete Methods

| Method | Description |
|--------|-------------|
| `millis()` | Returns current millisecond instant (equivalent to `System.currentTimeMillis()`) |
| `equals(Object obj)` | Compares clock equality |
| `hashCode()` | Returns hash code for the clock |

## Constructor

| Constructor | Description |
|-------------|-------------|
| `protected Clock()` | Accessible by subclasses |

## Key Characteristics

| Aspect | Requirement |
|--------|-------------|
| **Thread-safety** | All instantiable implementations must be thread-safe |
| **Mutability** | All instantiable implementations must be final and immutable |
| **Serialization** | Should implement `Serializable` where possible |
| **Leap Seconds** | Uses Java Time-Scale (UTC-SLS smoothing) |
| **Precision** | May be finer than milliseconds if available |
