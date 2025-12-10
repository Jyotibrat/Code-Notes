// SPDX-License-Identifier: MIT
pragma solidity >= 0.6.0 < 0.9.0;

contract Simple { // "contract" is a keyword here in solidity to create a smart contract. It is basically a class like in Java.
    uint256 Unsigned_Integer = 259; // uint256 is a unsigned integer which means no sign basically. It also has multiple types like uint255, uint2, etc. 256 means that uint256 can store values upto (2^256 - 1) and not more than that.
    int256 Signed_Integer = -52; // int256 is a signed integer which means it can store negative values too. It also has multiple types like int255, int2, etc. 256 means that int256 can store values from (2^255) to (2^255 - 1). Any number exceeding this range, it cannot be stored in this data type. 
    bool Boolean = true; // It basically stores 2 values: 'true' and 'false'.
    string String = "Hello World!"; // It stores a string value.
    address Address_for_Account_1 = 0x71f8cCC442AaBf2023A477693DD1260E782E0246; // It stores addresses of cryptocurrency accounts.
    bytes32 Byte = "cat"; // It stores byte data type and can store upto 32 bytes.
}