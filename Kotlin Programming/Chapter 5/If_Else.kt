// This program demonstrates how to use If Else Statements in Kotlin

fun main(){
	// This is how we write if else
	// val ip1 = readln().toIntOrNull() % 2 == 0 This will throw an error as modulus operation cannot be performed on NULL
	var ip2 = readln().toIntOrNull()
	var ip3 = readln().toIntOrNull()!!%2==0 // This will not throw an error because of !! Operator but it will throw error when entered something else apart from INT
	var ip4 = readln().toIntOrNull()
	if(ip2!=null) {
		ip2%=2 // This will throw an error if it is val instead of var
	}
	
	println(ip2)

	// Using if else instead of ternary operator
	val op1 = if (ip4!=null && ip4%2==0) true else false
	println(op1)
	
	/*
	NOTE: There is no ternary operator in Kotlin rather we use if else like a ternary operator because Kotlin has a functionality that if else statements can return values
	*/
	
	// Using if and else if statements
	if(ip4 != null && ip4>10){
		println("more than 10")
	}else if(ip4!=null && ip4<10){
		println("less than 10")
	}else {
		println("equal to 10")
	}
}
