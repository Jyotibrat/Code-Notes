// This is a program which demonstrates how Logical Operations are performed in Kotlin

fun main(){
    // && Operator
    val a = 10
    val b = 20
    println("a > 5 && b < 30: ${a > 5 && b < 30}") // true if both conditions are true

    // || Operator
    println("a > 5 || b < 30: ${a > 5 || b < 30}") // true if either condition is true

    // nested && and || operators
    println("a > 5 && b == 30 || a != 10: ${a > 5 && b == 30 || a != 10}") // it is seen as a > 5 && (b < 30 || a == 10); false
    println("a > 5 && b < 30 || a != 10: ${a > 5 && b < 30 || a != 10}")  // true
    println("a == 5 && b < 30 || a != 10: ${a == 5 && b < 30 || a != 10}") // false
}
