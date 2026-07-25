fun main(){
    // Defining a variable
    val a = 10 // 'val' is used to declare a read-only variable
    println(a)

    //Defining a variable which can only store integer values
    val b: Int = 20 // Here we explicitly specify the type of the variable as Int previously we did not specify the type of the variable as it was inferred by the compiler
    println(b)

    // Defining a variable which can only store float values
    val c: Float = 30.5f // Here we explicitly specify the type of the variable as Float and also we have to add 'f' at the end of the value to indicate that it is a float value
    // val c: Float = 30.5 This will give an error as 30.5 is a double value and cannot be assigned to a float variable
    println(c)

    val d: Double = 40.5 // Here we explicitly specify the type of the variable as Double
    println(d)

    /*    
    This is how we write multi-line comments in Kotlin. 
    A multi-line comment starts with slash-star and ends with star-slash.
    This is useful when we want to write a long comment or documentation for our code.
    NOTE: The main difference between float and double is that float is a 32-bit floating point number and double is a 64-bit floating point numberr.
    */

    // Defining a variable which can only store boolean values
    val e: Boolean = true // Here we explicitly specify the type of the variable as Boolean
    val f: Boolean = false // Here we explicitly specify the type of the variable as Boolean
    val z = false // Here we do not explicitly specify the type of the variable as Boolean
    println(e)
    println(f)
    println(z)

    // Defining a variable which can only store string values
    val s1: String = "Hello! World" // Here we explicitly specify the type of the variable as String
    val s2 = "Hello! World" // Here we do not specify the type of the variable as String as it is inferred by the compiler
    println(s1)
    println(s2)

    // s2="Changing the value of s2" This will give an error as we cannot change the value of a read-only variable
    var s3: String = "Hello! World" // Here we explicitly specify the type of the variable as String and also we use 'var' to declare a mutable variable
    s3 = "Changing the value of s3" // This is valid as we can change the value of a mutable variable
    println(s3)
}