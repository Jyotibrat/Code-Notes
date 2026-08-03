// This program demonstrates how open classes are used in Kotlin
fun main(){
	// This is how we use open classes
	print("Total amount in the bank: ")
	var amt = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	print("Enter the number of debits: ")
	val d = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	print("Enter the number of credits: ")
	val c = readln().toIntOrNull()?:run{
		println("Invalid Input!!")
		return
	}
	print("Enter the debits: ")
	val debits: MutableList<Int> = mutableListOf() // This is one way to initialize an empty mutable-list
	for(i in 0 until d){
		debits.add(
			readln().toIntOrNull()?:run{
				println("Invalid Input!!")
				return
			}
		)
	}
	print("Enter the credits: ")
	val credits = mutableListOf<Int>() // This is another way to initialize an empty mutable-list
	for(i in 0 until c){
		credits.add(
			readln().toIntOrNull()?:run{
				println("Invalid Input!!")
				return
			}
		)
	}
	val trans = transaction(
		amount = amt,
		cred = credits
	)
	trans.credit()
	trans.output()
	val bk = bank(
		amount = trans.amount,
		deb = debits
	)
	bk.debit()
	bk.output()
}

open class transaction(
	open var amount: Int,
	val cred: MutableList<Int>
) {
	fun credit(){
		for(i in 0..(cred.size - 1)) amount += cred[i]
	}
	open fun output(){
		var temp_sum: Int = 0
		for(i in 0..(cred.size-1)) temp_sum += cred[i]
		println("$temp_sum has been credited to the account with balance: $amount")
	}
}

class bank(
	override var amount: Int,
	val deb: MutableList<Int>
): transaction(amount, mutableListOf()) {
	fun debit(){
		for(i in 0..(deb.size - 1)) amount -= deb[i]
	}
	override fun output(){
		var temp_sum: Int = 0
		for(i in 0..(deb.size - 1)) temp_sum += deb[i]
		println("$temp_sum has been debited from the account with balance: $amount")
	}
}

/*
	NOTE:
		It is similar to abstract classes but the difference is that we can make instances of an open class and not of an abstract class.
		We can write functionality inside both abstract and open class but we can call the functionality using the instance of its own only in open classes and not abstract classes.
		In abstract classes, we have to be dependent on the child class.
*/
