// This program demonstrates how enum classes work in Kotlin
fun main() {
	// This is how we use enum classes

	// Creating a variable of an enum type
	val light = TrafficLight.RED

	println("Current Traffic Light: $light")

	// .name gives the name of the enum constant
	println("Name: ${light.name}")

	// .ordinal gives the position/index of the enum constant
	println("Ordinal: ${light.ordinal}")

	// Accessing a property defined in the enum class
	println("Duration: ${light.duration} seconds")

	// Calling a function defined inside the enum class
	light.action()

	println()

	// Using when with enum classes
	when (light) {
		TrafficLight.RED -> println("Vehicles must stop.")
		TrafficLight.YELLOW -> println("Vehicles should prepare to stop.")
		TrafficLight.GREEN -> println("Vehicles can move.")
	}

	println()

	// Getting all enum values
	println("All Traffic Lights:")

	for (value in TrafficLight.entries) {
		println("${value.name} -> ${value.duration} seconds")
	}
}
// This is how we use Enum Classes in Kotlin

enum class TrafficLight(
    val duration: Int
) {
    RED(60),
    YELLOW(5),
    GREEN(60);

    fun action() {
        when (this) {
            RED -> println("STOP")
            YELLOW -> println("GET READY")
            GREEN -> println("GO")
        }
    }
}
