// This is a program which demonstrates the Nullability concept

fun main(){
	val ip1 = readln().toInt() // This will throw error if we type something else which is not INT
	val ip2 = readln().toIntOrNull() // This will accept INT and if the input is not INT then set the value of ip2 as NULL
	val ip3 = readln().toIntOrNull() ?: 0 // This will assign the value of ip3 as 0 if the entered value is not INT
	val ip4 = readln().toIntOrNull()!! // read the NOTE below
	val ip5 = readln().toIntOrNull()?.inc() // inc() function will increase the value of the input by 1
	val ip6 = readln().toIntOrNull()?.rem(2) // rem() function will divide the input by the argument number and return the remainder
	val opr1 = ip2!!%2 // This will not work and throw an error if the enterd value is not INT but this will not raise a syntax error because of !! operator
	// val opr2 = ip%2 This will throw syntax error as stating that you cannot perform % operation on NULL
	val ip7 = readln().toIntOrNull()?.rem(2)?.equals(0) // equals() function is like == and return bool value
	val ip8 = readln().toIntOrNull()?.dec() // dec() function decreases the input value by 1
	// val ip9 = readln().toInt()?.inc() This will throw an error betcause ?. operator can only be used with function which returns a NULL value but here in this line there is no function which returns a NULL value for any reason

	println(ip1)
	println(ip2)
	println(ip3)
	println(ip4)	
	println(ip5)
	println(ip6)	
	println(ip7)
	println(ip8)

	/*
	NOTE: 
	ip4 will throw error if the entered value is not INT because even if we write toIntOrNull() such that it stores NULL if the entered value is not INT but due to the !! operator it forces the program to not store any NULL value in ip4
	?.  This operator is a Null safety operator and is a unique feature of Kotlin which means is that if the condition or a function is satisfied on the left side of the operator then only the left side will be executed 
	*/
}
