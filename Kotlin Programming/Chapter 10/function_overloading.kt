// This program demonstrates how function overloading works in Kotlin
fun String.reverse(): String{
	val new_str = buildString{
		for(i in this@reverse.lastIndex downTo 0) append(this@reverse[i])
	}
	return new_str
}

fun Int.reverse(): Int{ // This is how we overload a extension function in Kotlin
	return this@reverse.toString().reversed().toInt() // If I would have write this instead of this@reverse it would have worked but writing this@function_name is a good practice

	/*
	NOTE:
		Using function overloading we can make a function workable for different data types.
		This is one of the use case of function overloading.
		Similar way we can use this for normal functions also.
		One thing to be noted is that 2 functions with same name and name set of parameters will throw an error and it is not function overloading.
	*/ 
}

fun main(){
	// This is how we can perform function overloading
	print("1 -> For Palindrome Check\n2 -> Strobogrammatic Number Check\nEnter a choice: ")
	val choice = readln().toIntOrNull()
	when(choice){
		1 -> {
			print("Enter a String which might be Palindrome: ")
			val ip = readln()
			val check = ip.reverse()
			if(check == ip) println("Entered String $ip is a Valid Palindrome.")
			else println("Entered String $ip is not a Palindrome.")
		}
		2 -> {
			print("Enter a Number which might be strobogrammatic: ")
			val ip = readln().toIntOrNull()
			if(ip == null){
				println("Invalid Input!!")
				return
			}
			val check = ip.reverse()
			if(check == ip) println("Enter Number $ip is a Valid Strobogrammatic Number.")
			else println("Entered Number $ip is not a Strobogrammatic Number.")
			
		}
		else -> {
			println("Invalid Choice")
			return
		}
	}
}
