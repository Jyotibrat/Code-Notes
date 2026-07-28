// This program demonstrates how functions are written in Kotlin
fun print_elements(str: String): Unit{ // In C++ we write functions with no return type as void, in Kotlin we write Unit as void. READ THE NOTE
	for(ch in str){
		if(ch == str[str.lastIndex]){
			println(ch)
			break
		}
		print("$ch, ")
	/*
	NOTE:
	I have written the return type as Unit for readability purposes.
	It is not necessary to write it if the function does not return anything.
	*/
	}
}

fun reversed(str: String): String{ // To have a return type we write the return type as : return_type similar to what in Python
	var new_str = buildString{
		for(i in str.lastIndex downTo 0){
			append(str[i])
		}
	}
	return new_str // Returning the data from the function
}

fun main(){
	// This is how we use functions
	print("Enter the String on which you want perform operations: ")
	val str = readln()
	print("\n1 -> Reverse the String\n2 -> Print all the characters of the string with comma\nEnter the operation(Number): ")
	val choice = readln().toIntOrNull()
	when(choice){
		null -> println("Entered wrong choice!!")
		!in 1..2 -> println("Entered choice does not exists")
		1 -> println(reversed(str = str)) // Function call similar to C++. READ THE NOTE
		2 -> print_elements(str)
	
	/*
	NOTE:
	In the line where we are calling the reversed function we wrote str = str this is called as named arguments which means we are assigning the argument to a variable and then passing it to the function.
	The main purpose of it is to increase the readability of the code.
	*/
	}
}
