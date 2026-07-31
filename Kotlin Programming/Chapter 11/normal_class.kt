// This program demonstrates how classes in Kotlin works
import kotlin.math.sqrt

class EquilateralTriangle(private val side: Float) {

    fun perimeter(): Float = 3f * side

    fun semiPerimeter(): Float = perimeter() / 2f

    fun area(): Float {
        val s = semiPerimeter()
        return sqrt(s * (s - side) * 3f)
    }

    fun height(): Float = (2f * area()) / side
}

class IsoscelesTriangle(
    private val side1: Float,
    private val side2: Float,
    private val sameSide: Int
) {

    fun perimeter(): Float = if (sameSide == 1) 2f * side1 + side2 else 2f * side2 + side1

    fun semiPerimeter(): Float = perimeter() / 2f

    fun area(): Float {
        val s = semiPerimeter()

        return if (sameSide == 1) sqrt(s * (s - side1) * (s - side1) * (s - side2)) else sqrt(s * (s - side2) * (s - side2) * (s - side1))
    }

    fun height(): Float {
        val a = area()

        return if (sameSide == 1) (2f * a) / side2 else (2f * a) / side1
    }

    fun description(): String = if (sameSide == 1) "$side1, $side1, $side2" else "$side1, $side2, $side2"
}

class ScaleneTriangle(
    private val side1: Float,
    private val side2: Float,
    private val side3: Float,
    private val base: Int
) {

    fun perimeter(): Float =
        side1 + side2 + side3

    fun semiPerimeter(): Float =
        perimeter() / 2f

    fun area(): Float {
        val s = semiPerimeter()
        return sqrt(s * (s - side1) * (s - side2) * (s - side3))
    }

    fun height(): Float {
        val a = area()

        val baseLength = when (base) {
            1 -> side1
            2 -> side2
            else -> side3
        }

        return (2f * a) / baseLength
    }

    fun description() = "$side1, $side2, $side3"
}

fun printEquilateral(t: EquilateralTriangle) {
    println("\n----- Equilateral Triangle -----")
    println("Area            : ${t.area()}")
    println("Perimeter       : ${t.perimeter()}")
    println("Semi-perimeter  : ${t.semiPerimeter()}")
    println("Height          : ${t.height()}")
}

fun printIsosceles(t: IsoscelesTriangle) {
    println("\n----- Isosceles Triangle -----")
    println("Sides           : ${t.description()}")
    println("Area            : ${t.area()}")
    println("Perimeter       : ${t.perimeter()}")
    println("Semi-perimeter  : ${t.semiPerimeter()}")
    println("Height          : ${t.height()}")
}

fun printScalene(t: ScaleneTriangle) {
    println("\n----- Scalene Triangle -----")
    println("Sides           : ${t.description()}")
    println("Area            : ${t.area()}")
    println("Perimeter       : ${t.perimeter()}")
    println("Semi-perimeter  : ${t.semiPerimeter()}")
    println("Height          : ${t.height()}")
}

fun main() {
	// This is how we use classes
    println("Compare 2 Types of Triangles")
    println("1 -> Equilateral and Scalene")
    println("2 -> Equilateral and Isosceles")
    println("3 -> Scalene and Isosceles")

    print("Enter choice: ")

    val choice = readln().toIntOrNull()

    if (choice == null || choice !in 1..3) {
        println("Invalid Choice!")
        return
    }

    when (choice) {

        1 -> {

            println("\nEnter Equilateral Triangle")

            print("Side: ")
            val eSide = readln().toFloatOrNull() ?: return println("Invalid Input!")

            val equi = EquilateralTriangle(eSide)

            println("\nEnter Scalene Triangle")

            print("Side 1: ")
            val s1 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Side 2: ")
            val s2 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Side 3: ")
            val s3 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Base Number (1-3): ")
            val base = readln().toIntOrNull() ?: return println("Invalid Input!")

            val scalene = ScaleneTriangle(s1, s2, s3, base)

            printEquilateral(equi)
            printScalene(scalene)
        }

        2 -> {

            println("\nEnter Equilateral Triangle")

            print("Side: ")
            val eSide = readln().toFloatOrNull() ?: return println("Invalid Input!")

            val equi = EquilateralTriangle(eSide)

            println("\nEnter Isosceles Triangle")

            print("Side 1: ")
            val side1 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Side 2: ")
            val side2 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Which side is repeated? (1 or 2): ")
            val same = readln().toIntOrNull() ?: return println("Invalid Input!")

            if (same !in 1..2) {
                println("Invalid repeated side.")
                return
            }

            val iso = IsoscelesTriangle(side1, side2, same)

            printEquilateral(equi)
            printIsosceles(iso)
        }

        3 -> {

            println("\nEnter Scalene Triangle")

            print("Side 1: ")
            val s1 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Side 2: ")
            val s2 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Side 3: ")
            val s3 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Base Number (1-3): ")
            val base = readln().toIntOrNull() ?: return println("Invalid Input!")

            val scalene = ScaleneTriangle(s1, s2, s3, base)

            println("\nEnter Isosceles Triangle")

            print("Side 1: ")
            val side1 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Side 2: ")
            val side2 = readln().toFloatOrNull() ?: return println("Invalid Input!")

            print("Which side is repeated? (1 or 2): ")
            val same = readln().toIntOrNull() ?: return println("Invalid Input!")

            if (same !in 1..2) {
                println("Invalid repeated side.")
                return
            }

            val iso = IsoscelesTriangle(side1, side2, same)

            printScalene(scalene)
            printIsosceles(iso)
	/*
	NOTE:
		If we create 2 instances of the same class and pass the same values in the constructor and compare them using == operator, it will result in false.
		It is because it is not comparing the values of the classes, rather it is comparing that instance 1 is equal to instance 2 or not.
		Since, we created 2 instances, in memory it was 2 different objects so, they are not equal.
	*/
        }
    }
}
