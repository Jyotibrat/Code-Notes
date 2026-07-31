// This program demonstrates how we use data classes in Kotlin
fun main(){
	// This is how we use data class
	println("Enter the values of length and width of rectangle 1: ")
	print("Enter the length of rectangle 1: ")
	var rect1 = Rectangle(
		length = run {
				readln().toFloatOrNull()?: run{
					println("Invalid Input!!")
					return
		
				}
			},
	
		width = run{
				print("Enter the width of rectangle 1: ")
				readln().toFloatOrNull()?:run{
					println("Invalid Input!!")
					return
				} 
			}
	)
	println("Enter the values of length and width of rectangle 2: ")
	print("Enter the length of rectangle 2: ")
	var rect2 = Rectangle(
		length = readln().toFloatOrNull()?:run{
			println("Invalid Input!!")
			return
		},

		width = run {
				print("Enter the width of rectangle 2: ")
				readln().toFloatOrNull()?:run{
					println("Invalid Input!!")
					return
				}
			}
	)
	if(rect1 == rect2) println("The length and width of the rectangles are same.")
	else println("The length and width of the rectangles are different.")
	println("The area of the rectangle 1 is: ${rect1.area()}")
	println("The perimeter of the rectangle 1 is: ${rect1.perimeter()}")
	println("The area of the rectangle 2 is: ${rect2.area()}")
	println("The perimeter of the rectangle 2 is: ${rect2.perimeter()}")
	print("Do you want to copy the length and width values of rectangle 1 to 2?\n1 -> Yes\n2 -> No\nWhat is your choice: ")
	val choice_1 = readln().toIntOrNull()
	when(choice_1){
		1 -> {
			print("Do you want to change any value of length or width of the rectangle as we copy?\n1 -> Yes\n2 -> No\nWhat is your choice: ")
			val choice_2 = readln().toIntOrNull()?:run{
				println("Invalid Input!!")
				return
			}
			when(choice_2){
				1 -> {
					print("Enter the which you want to change?\n1 -> Length\n2 -> Width\nWhat is your choice: ")
					val choice_3 = readln().toIntOrNull()?:run{
						println("Invalid Input!!")
						return
					}
					if(choice_3 == 1){
						rect2 = rect1.copy(
							length = run{
								print("Enter the new length of rectangle 2: ")
								readln().toFloatOrNull()?:run{
									println("Invalid Input!!")
									return
								}
							}
						)
						println("The area of the rectangle 2 is: ${rect2.area()}")
						println("The perimeter of the rectangle 2 is: ${rect2.perimeter()}")
					}else if(choice_3 == 2){
						rect2 = rect1.copy(
							width = run{
								print("Enter the new width of rectangle 2: ")
								readln().toFloatOrNull()?:run{
									print("Invalid Input!!")
									return
								}
							}
						)
						println("The area of the rectangle 2 is: ${rect2.area()}")
						println("The perimeter of the rectangle 2 is: ${rect2.perimeter()}")
					}else{
						println("Invalid Input!!")
						return
					}
				}
				2 -> {
					println("Good Decision!!")
					rect2 = rect1
					println("The area of the rectangle 2 is: ${rect2.area()}")
					println("The perimeter of the rectangle 2 is: ${rect2.perimeter()}")
				}
				else -> {
					println("Invalid Input!!")
					return
				}
			}
		}
		2 -> {
			println("Good Decision!!")
			return
		}
		else -> { 
			println("Invalid Input!!")
			return
		}
	}
}

data class Rectangle(val length: Float, val width: Float){ // Data classes in Kotlin are special classes which are mainly used to store and handle data.
	fun area(): Float {
		return length * width
	}
	fun perimeter(): Float {
		return (2 * length) + (2 * width)
	}
}

/*
	NOTE:
		If there is a normal class and not a data class and we create 2 instances of the same classes and compare them using == operator, it will give false even if the data is same.
		It is because they are not being compared by the data rather they are being compare by the memory location of the instances, which is different for the instances of the same class.
		But, in case of data class when we do comparison we compare the data not the memory of the instances.
		Also when we print the instance of a normal class it will give a memory address and not the values inside it.
		But, when we print a instance of a data class it will give the values of the data in a human readable format. 
		
		We can copy the values of a instance of a class to another instance using the == operator.
		But If we want to change few values of some data before copying we can do it using .copy() function.
		Read the Code above to understand the concept.
*/
