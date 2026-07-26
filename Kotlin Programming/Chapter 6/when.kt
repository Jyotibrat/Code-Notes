// This program demonstrates how when Expression is used
fun main(){
	// This is how we use when expression which helps in reducing multiple lines of if else statements
	val ip = readln().toIntOrNull()
	
	val op = when{ // This is how we can use when as an expression
		ip in 1..5 -> when (ip) { // in operator can be used check if an element is within a particular range
			1->"The Output is 1"
			2->"The Output is 2"
			3->"The Output is 3"
			4->"The Output is 4"
			else->"The Output is 5" // when expression must need a else statement as it is being used as expression
		}
		ip !in 1..5-> if(ip in 6..10) when(ip){
				6->"The Output is 6"
				7->"The Output is 7"
				8->"The Output is 8"
				9->"The Output is 9"
				else->"The Output is 10"
			} else "The Output is beyond 10" // if when used as expression need statement. By expression it means is that when written like a ternary operator
		else->"The Output is beyond 10"
	}

	/*
	NOTE: The above example of code is like a nested when and if else statements.
	*/

	println(op)
}
