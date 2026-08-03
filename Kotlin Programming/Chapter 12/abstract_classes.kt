// This program demonstrates how abstract classes are written in Kotlin
import kotlin.system.exitProcess

fun main(){
	// This is how we use abstract classes
	print("Enter number of male user: ")
	val mu = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	print("Enter number of female user: ")
	val fu = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	val Male =  Male_User(
			male_num = mu
		)
	val Female = Female_User(
			female_num = fu
		)

	Male.input()
	Female.input()
	print("What do you want to do?\n1 -> Print the Male User Data\n2 -> Print the Female User Data\n3 -> Delete a Male User\n4 -> Delete a Female User\n5 -> Do nothing\nEnter your choice: ")
	val choice = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	when(choice){
		1 -> {
			Male.output()
		}
		2 -> {
			Female.output()
		}
		3 -> {
			print("Enter the index at which you want to delete the Male User: ")
			Male.delete(
				index = readln().toIntOrNull()?:run{
					println("Invalid Input!!")
					return
				}
			)
		}
		4 -> {
			print("Enter the index at which you want to delete the Female User: ")
			Female.delete(
				index = readln().toIntOrNull()?:run{
					println("Invalid Input!!")
					return
				}
			)
		}
		5 -> {
			println("Good Choice!!")
			return
		}
	}
}

abstract class User{
	val name: MutableList<String> = mutableListOf()
	val age: MutableList<Int> = mutableListOf()
	abstract fun input()
	fun output(){
		for(i in 0..name.size) print("${name[i]}: ${age[i]}")
	}
}

data class Male_User(
	val male_num: Int
): User() {
	override fun input(){
		println("Enter the names and ages of $male_num males: ")
		for(i in 0..male_num){
			print("Enter the name of male ${i+1}: ")
			name.add(readln())
			print("Enter the age of male ${i+1}: ")
			age.add(
				readln().toIntOrNull()?:run{
					println("Invalid Input!!")
					exitProcess(1)
				}
			)
		}
	}
	fun delete(index: Int){
		name.removeAt(index-1)
		age.removeAt(index-1)
		output()
	}
}

data class Female_User(
	val female_num: Int
): User() {
	override fun input(){
		println("Enter the names and ages of $female_num females: ")
		for(i in 0..female_num){
			print("Enter the name of female ${i+1}: ")
			name.add(readln())
			print("Enter the age of female ${i+1}: ")
			age.add(
				readln().toIntOrNull()?:run{
					println("Invalid Input!!")
					return
				}
			)
		}
	}
	fun delete(index: Int){
		name.removeAt(index-1)
		age.removeAt(index-1)
		output()
	}
}

/*
	NOTE:
		The keyword 'abstract' written in a function should be written as override in the child class.
		Also if the function is empty inside abstract class it must be written with 'abstract' keyword.
		If we want that there is a class which we need to define just the structure of other classes and do nothing other than that then we can use interfaces.
		But, if we want some class which does define of structure of other classes but performs some functionalities of its own then we will choose abstract classes.
*/
