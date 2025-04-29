#include "gamingChair.h"
#include "table.h"

int main() {
    cout << "=== Створюємо стіл ===\n";
    table t;

    cout << "\n=== Створюємо геймерське крісло ===\n";
    GamingChair gc("ергономічне", "червоний", "Razor");

    return 0;
}
