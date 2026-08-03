// This Program demonstrates how to use Interfaces in Kotlin
fun main(){
	// This is how we use interfaces
	print("Whose area and perimeter you want to find?\n1 -> Square\n2 -> Rectangle\nEnter your choice: ")
	val choice = readln().toIntOrNull()?:run{
		println("Invalid Choice")
		return
	}
	when(choice){
		1 -> {
			print("Enter the side length of the Square: ")
			val sq = square(
				side_length = readln().toFloatOrNull()?:run{
					println("Invalid Input!!")
					return
				}
			)
			println("The area of the Square of side length ${sq.side_length} is: ${sq.area()}")
			println("The perimeter of the Square of side length ${sq.side_length} is: ${sq.perimeter()}")
		}
		2 -> {
			print("Enter the length of the rectangle: ")
			val rect = rectangle(
				length = readln().toFloatOrNull()?:run{
					println("Invalid Input!!")
					return
				},
				width = run{
					print("Enter the width of the rectangle: ")
					readln().toFloatOrNull()?:run{
						println("Invalid Input!!")
						return
					}
				}
			)
			println("The area of the Rectangle of length ${rect.length} and width ${rect.width} is: ${rect.area()}")
			println("The perimeter of the Rectangle of length ${rect.length} and width ${rect.width} is: ${rect.perimeter()}")
		}
		else -> {
			println("Invalid Choice")
			return
		}
	}
}

interface shape{
	fun area(): Float
	fun perimeter(): Float
}

class square(val side_length: Float) : shape{
	override fun area(): Float{
		return side_length * side_length
	}
	override fun perimeter(): Float{
		return 4 * side_length
	}
}

data class rectangle(val length: Float, val width: Float) : shape{
	override fun area(): Float{
		return length * width
	}
	override fun perimeter(): Float{
		return (2 * length) + (2 * width)
	}
}

/*
NOTE:
	Interfaces are used to define how classes should be written.
	They provide kind of like a structure like what functions should be there and what will be there return type.
	They also define what variables should be there.
	They are kind of similar to what we have seen interfaces in JS and TS.
*/
