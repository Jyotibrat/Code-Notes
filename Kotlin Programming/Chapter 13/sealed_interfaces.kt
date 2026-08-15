// This program demonstrates how sealed interfaces work in Kotlin
fun main(){
	// This is how we use sealed interfaces
	print("Do you want to authenticate?\n1 -> Yes\n2 -> No\nEnter your choice: ")
	val choice = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	when(choice){
		1 -> {
			print("Enter the user name: ")
			val usr = User(
				un = readln().toIntOrNull()?:run{
					println("Invalid Input!!")
					return
				}, 
				pass =run{
					print("Enter the password: ")
					readln().toIntOrNull()?:run{
						println("Invalid Input!!")
						return
					}
				} 
			)
			usr.logged_in_or_not()
		}
		2 -> {
			println("Good Decision!!")
			return
		}
	}
}

sealed interface Functions{
	val user_name: Int
	val password: Int
	fun check(): Boolean
}

sealed class Login(
	val check_user_name: Int,
	val check_password: Int
): Functions{	
	override val user_name: Int = 123
	override val password: Int = 456
	override fun check(): Boolean{
		return(user_name == check_user_name && password == check_password)
	}
}

data class User(
	val un: Int,
	val pass: Int,
): Login(un, pass){
	fun logged_in_or_not(){
		val output: Boolean = check()
		if(!output) println("The entered user name and password does not match!!")
		else println("The entered user name and password match!!")
	}
}

/*
========================================
SEALED CLASSES
========================================

1. A sealed class is a special type of abstract class.
2. Objects of a sealed class cannot be created directly.
3. A sealed class restricts its direct subclasses to a fixed hierarchy
   (they must be declared in the same package and module).
4. Since the compiler knows all direct subclasses, 'when' expressions
   on a sealed class can be exhaustive (no 'else' branch required).
5. Sealed classes can have:
   - Constructors
   - Properties
   - Implemented functions
   - Open functions
   - Abstract functions
6. Functions behave exactly like normal classes:
   - fun        -> final by default
   - open fun   -> can be overridden
   - abstract fun -> must be overridden
7. Use sealed classes when there is a fixed number of possible states,
   such as:
   - NetworkResult (Success, Error, Loading)
   - PaymentMethod
   - AuthenticationResult
   - TrafficLight
8. Every sealed class is abstract, but every abstract class is NOT sealed.


========================================
SEALED INTERFACES
========================================

1. A sealed interface is an interface with a restricted set of implementations.
2. Only classes/interfaces within the same package and module can directly implement it.
3. Unlike sealed classes, sealed interfaces do NOT have constructors.
4. Interface members are automatically:
   - abstract (if no body is provided)
   - open (no need to write 'open')
5. Classes can implement multiple interfaces, including sealed interfaces.
6. Since the compiler knows every implementation, 'when' expressions
   become exhaustive.
7. Use sealed interfaces when you need:
   - A fixed set of implementations
   - Multiple inheritance through interfaces
   - A common contract without shared state


========================================
SEALED CLASS vs SEALED INTERFACE
========================================

Sealed Class
------------
✔ Can have constructors
✔ Can store state through constructor properties
✔ Can contain implemented and abstract functions
✔ Single inheritance only

Sealed Interface
----------------
✔ No constructors
✔ Cannot store constructor state
✔ Can declare properties and default function implementations
✔ Supports multiple interface inheritance

Choose a sealed class when subclasses share common state or implementation.
Choose a sealed interface when you only need a common contract and want
classes to be free to extend another class.


========================================
WHEN TO USE
========================================

open class
    -> When anyone should be allowed to inherit from it.

abstract class
    -> When you want to provide some implementation but force subclasses
       to implement certain methods.

sealed class
    -> When there is a fixed set of subclasses and shared state/behavior.

interface
    -> When unrelated classes should share the same capability.

sealed interface
    -> When there is a fixed set of implementations but you also want
       multiple interface inheritance.
*/
