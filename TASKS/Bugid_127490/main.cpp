#include <QCoreApplication>
#include <QDebug>
#include <QFlags>

// Step 1: Define bitmask enum values
enum MyPermission {
    None     = 0b000,  // 0
    Read     = 0b001,  // 1
    Write    = 0b010,  // 2
    Execute  = 0b100   // 4
};

// Step 2: Enable QFlags and operators
Q_DECLARE_FLAGS(MyPermissions, MyPermission)
Q_DECLARE_OPERATORS_FOR_FLAGS(MyPermissions)

int main() {
    MyPermissions p1 = Read;       // 0b001
    MyPermissions p2 = Write;      // 0b010

    // 1. Bitwise OR (operator|): Combine flags
    MyPermissions combined = p1 | p2;  // 0b001 | 0b010 = 0b011
    qDebug() << "OR  (Read | Write):" << int(combined);  // Output: 3

    // 2. OR assignment (operator|=)
    combined |= Execute;              // 0b011 | 0b100 = 0b111
    qDebug() << "OR= (|= Execute):" << int(combined);  // Output: 7

    // 3. Bitwise AND (operator&): Check if Write is set
    MyPermissions result = combined & Write;  // 0b111 & 0b010 = 0b010
    qDebug() << "AND (combined & Write):" << int(result);  // Output: 2

    // 4. AND assignment (operator&=)
    result &= Read;  // 0b010 & 0b001 = 0b000
    qDebug() << "AND= (&= Read):" << int(result);  // Output: 0

    // 5. Bitwise XOR (operator^)
    MyPermissions xorResult = p1 ^ Write;  // 0b001 ^ 0b010 = 0b011
    qDebug() << "XOR (Read ^ Write):" << int(xorResult);  // Output: 3

    // 6. XOR assignment (operator^=)
    xorResult ^= Execute;  // 0b011 ^ 0b100 = 0b111
    qDebug() << "XOR= (^= Execute):" << int(xorResult);  // Output: 7

    // 7. Bitwise NOT (operator~)
    MyPermissions notP1 = ~p1;  // ~0b001 = 0b110 (Write + Execute)
    qDebug() << "NOT (~Read):" << int(notP1);  // Output: 6

    return 0;
}
