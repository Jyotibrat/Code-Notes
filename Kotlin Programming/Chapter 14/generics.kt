// This is how we use Generics in Kotlin

/*
    GENERICS

    Generics allow us to write code that can work with different
    data types while still maintaining type safety.

    Instead of writing:

        class IntBox
        class StringBox
        class DoubleBox

    We can write:

        class Box<T>

    T is a type parameter.
*/


// ========================================
// 1. GENERIC CLASS
// ========================================

fun main() {
    // This is how we use generics

    // ------------------------------------
    // Generic Class
    // ------------------------------------

    val intBox = Box(100)

    val stringBox = Box("Hello Kotlin")

    val doubleBox = Box(25.5)

    intBox.printValue()
    stringBox.printValue()
    doubleBox.printValue()


    println()


    // ------------------------------------
    // Generic Function
    // ------------------------------------

    printItem(100)

    printItem("Kotlin")

    printItem(45.5)


    println()


    // ------------------------------------
    // Multiple Type Parameters
    // ------------------------------------

    val pair = PairBox(
        "Age",
        20
    )

    pair.printValues()


    println()


    // ------------------------------------
    // Generic Function with Multiple Types
    // ------------------------------------

    printPair(
        "Name",
        "Baby"
    )

    printPair(
        "Age",
        20
    )


    println()


    // ------------------------------------
    // Generic Constraint
    // ------------------------------------

    println(square(5))

    println(square(5.5))

    // This would NOT compile:

    // println(square("Hello"))


    println()


    // ------------------------------------
    // Generic Class with Constraint
    // ------------------------------------

    val numberBox = NumberBox(50)

    println(numberBox.doubleValue())


    println()


    // ------------------------------------
    // Generic Collections
    // ------------------------------------

    val numbers: MutableList<Int> = mutableListOf()

    numbers.add(10)
    numbers.add(20)
    numbers.add(30)

    println(numbers)


    val names: MutableList<String> = mutableListOf()

    names.add("Alice")
    names.add("Bob")
    names.add("Charlie")

    println(names)
}

class Box<T>(val value: T) {

    fun printValue() {
        println("Value: $value")
        println("Type: ${value!!::class.simpleName}")
    }
}


// ========================================
// 2. GENERIC FUNCTION
// ========================================

fun <T> printItem(item: T) {
    println("Item: $item")
}


// ========================================
// 3. MULTIPLE TYPE PARAMETERS
// ========================================

class PairBox<A, B>(
    val first: A,
    val second: B
) {

    fun printValues() {
        println("First: $first")
        println("Second: $second")
    }
}


// ========================================
// 4. GENERIC FUNCTION WITH MULTIPLE TYPES
// ========================================

fun <A, B> printPair(first: A, second: B) {

    println("First: $first")
    println("Second: $second")
}


// ========================================
// 5. GENERIC TYPE CONSTRAINT
// ========================================

// T must be a subclass of Number.
//
// Therefore Int, Float, Double, Long etc. are allowed.
//
// String is NOT allowed.

fun <T : Number> square(number: T): Double {

    return number.toDouble() * number.toDouble()
}


// ========================================
// 6. GENERIC CLASS WITH CONSTRAINT
// ========================================

class NumberBox<T : Number>(
    val number: T
) {

    fun doubleValue(): Double {
        return number.toDouble() * 2
    }
}