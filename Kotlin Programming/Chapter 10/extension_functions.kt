// This program demonstrates how to write extension functions in Kotlin
fun String.reversed(): String{ // We wrote String.reversed() so that this function is only applicable to String variables
	val new_str = buildString{
		for(i in this@reversed.lastIndex downTo 0) append(this@reversed[i]) // Using the this keyword we can reference to the String we are handling in this function
	}
	return new_str
	
	/*
	NOTE:
	We use the this keyword to reference the object because there are no arguments passed to the function.
	*/
}

fun main(){
	// This is how we write extension functions
	print("Enter the String that you want to check if it is palindrome or not: ")
	val str = readln()
	val new_str = str.reversed() // This is how we can call extension functions
	if(str == new_str) println("Entered String \"$str\" is a Valid Palindrome.")
	else println("Entered String \"$str\" is not a Palindrome.")
}
