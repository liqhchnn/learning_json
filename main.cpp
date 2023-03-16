#include <iostream>
#include "json.h"

using namespace std;
using namespace json_lqh::json;

int main() {
    Json obj;
    Json arr;
    arr[0] = 1;
    arr[1] = "a";
    obj["bool"] = true;
    obj["int"] = 123;
    obj["double"] = 1.23;
    obj["str"] = "hello world";

    arr.remove(0);
    std::cout << arr.str() << std::endl;

    obj.remove("int1");
    std::cout << obj.str() << std::endl;

    return 0;
}
