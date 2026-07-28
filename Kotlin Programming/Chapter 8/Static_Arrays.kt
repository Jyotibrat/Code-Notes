// This is a function that demonstrates how to use Arrays in Kotlin
fun main(){
	// This is how we use static arrays
	val array = intArrayOf(1,2,3,4,5) // This is how we create the static array
	
	print("Enter the Index that you want to get the value of: ")
	var ip = readln().toIntOrNull()
	array[0] = 0 // This proves that arrays in Kotlin are mutable
		
	when{
		ip != null -> if(ip in 0..(array.size-1))
					println("The number at index \"${ip}\" is: ${array[ip]}")
				else
					println("Index \"$ip\" not found")
		else -> println("Index \"$ip\" not found")
	}

	print("Enter the Number that you want to append: ")	
	val ip2 = readln().toIntOrNull()
	
	val new_array = if (ip2 != null) {
		array + ip2 // This is how we can append an element to an array but this creates an new array in the memory because we declare an array it is always of a fixed size and we cannot change its size so when we append it, it makes a new array in the memory
	} else { array }
	
	println("The entered value at \"${new_array.lastIndex}\" is: ${new_array[new_array.lastIndex]}") // lastIndex gives the last index of the array
	println(array) // This will not give output as the array rather it will give a hash code
	println("The new array is: \"${new_array.contentToString()}\"") // This is how we print the array
}
