// This program demonstrates how to handle exceptions in Kotlin
fun main(){
	// This is how we write the try catch block
	val ip = try{ // try keyword is used to write the block of code which might throw an error. This is how we can use try as an expression and not as a statement as we can returning a value from the try and catch block.
		readln().toInt()
	} catch(e: NumberFormatException){ // We can catch any kind of Exception by replacing 'NumberFormatException' with 'Exception'
		println("$e Exception has been caught.")
		0 // This is the defaul value which will be returned to ip
	} finally { // The code inside the finally block will always execute and it is normally used for cleanup of resources or destroy network endpoints, etc. Also this block does not return any value which can be assigned outside the try and catch block.
		println("No exceptions are remaining. All can rest now.")
	}
	println(ip)

	// We can intentionally throw an exception
	try{ // This is how we can use try as a statement and not as a expression
		throw Exception("\"It is an exception that I want to throw\"")
	}catch (e: Exception) {
		println("The Exception $e has been caught.")
	}

	/*
	NOTE:
	finally{
		println("Hello World")
	}
	This will throw an error because finally block cannot exist without the try catch block.
	*/
}
