// This is how we create a Singleton in Kotlin
fun main() {
    // This is how we use singletons

    // We DON'T create an object using Database()
    // There is only one instance of Database.

    Database.status()

    Database.connect()

    Database.status()

    Database.disconnect()

    Database.status()
}

object Database {

    var connectionStatus = false

    fun connect() {
        connectionStatus = true
        println("Database connected.")
    }

    fun disconnect() {
        connectionStatus = false
        println("Database disconnected.")
    }

    fun status() {
        if (connectionStatus)
            println("Database is connected.")
        else
            println("Database is disconnected.")
    }
}