// This program demonstrates how for loops are written in Kotlin
fun main(){
	// This is how we use for loops
	print("Enter the size of the Array that you want to print(only 3 tries): ")
	var tries: Int = 3
	var size: Int? = null
	var flag: Boolean = false
	for(i in 0..(tries-1)){
		size = readln().toIntOrNull()?:continue
		flag = true
		break
	}
	if(!flag) {
		println("Invalid Input! You have ${tries-3} tries left")
		return
	}
	println("Enter the numbers of the Array: ")
	var temp: Int?
	val Array = mutableListOf<Int>()
	for(i in 0 until size!!){
		print("Enter the number at index $i: ")
		temp = readln().toIntOrNull()
		if(temp == null){
			println("Entered Value was $temp since it is not INT so the number at index $i is ignored")
			continue
		}
		Array.add(temp)
	}
	println("These are the elements of the Array: ")
	for(num in Array){
		if(num == Array[Array.lastIndex]){ 
			println(num)
			break
		}
		print("$num, ")
	}
	println("These are the elements in reverse order: ")
	for(i in Array.size-1 downTo 0){
		if(i == 0) {
			println(Array[i])
			break
		}
		print("${Array[i]}, ")
	}
	var sum: Int = 0
	print("Sum of values at even indices: ")
	for(i in 0 until (Array.size) step 2) sum += Array[i]
	print(sum)
}
