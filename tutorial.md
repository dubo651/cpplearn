# This is the tutorial for learning CPP

> As I have learnt python, I may jump out some basic ideas for programming

# Part I (260528)

## 0. Notice:

- All variables' type should be defined.
- before beginning a new line, add a `;` behind the last line.
- Using `//` for comments.
- Remember to add a `return 0` at the end of the main() function.

## 1. Basics:

1. The `#include` keyword is a preporsessor directive -- Maybe it is similar for what `import` does in python, but it includes more basics. Like the `#include <iostream>`, the input and output stream of this program.

Most of the package include using is listed below:

| Package_name     | what_it_give |
| ----------- | ----------- |
| iostream      | cin, cout, cerr      |
| string   | give you info about string |
| sstream  | treat a string like stream |

2. the `using namespace std` is to using the `standard(std)` in the namespace. Without this, everytime you want to define a variable, not only you need to define its `type`, but also need to define which `namespace` its in. like `int x = 1` will become `std::int x = 1`

> Something to note about this:

- The standard grammar: `[type] var_name = value` or `std::[type] var_name = value`
- Sometimes, using directly the whole `std` namespace will cause name collision when the `var_name` is the same with someone in the `std` namespace. So the better option to use namespace is `using std::[type]` for some intended variable type. Example below:

```cpp
using std::cout;
using std::string;
```

3. The difference between `char` and `string`:

- `char` type is a single character that can be expressed by ASCII value, so it is calculable, like `A + 1 = B` is reasonable in Cpp (if A and B are all char type)
- `string` type is a lot of characters, it cannot doing calculation, but a lot of string function are applied to it.
- we use `'A'` to express `char`, while `"A"` to express `string`.
- We need to do `#include <string>` first before using this type

4. Useful functions in string.

| function_name     | effect |
| ----------- | ----------- |
| s.length()   | find the length (including blank) |
| s.size()   | same as length |
| s.at(0) | same to `s[0]` |
| s.find("something") | returns the index where "something" starts |
| s.replace(start_pos, length, "new_string") | returns as the discription |
| s.empty() | check whether the string is full or empty |
| s.erase(a, b) | removes b chars starting at index a |
| s + "another one" | combine string |
| s[0] | same to the third one |

*Addtion*: it is good to know what is C-Style `char` array.

## 2. Basics(II):

1. Usage of variables:

| type_name     | what_it_give |
| ----------- | ----------- |
| int      | integer |
| string   | string |
| char  | ASCII character |
| double | fraction num |
| bool | `true` or `false` |
| auto | let compiler self-detect the type (Python did a really good job on this)|

2. Usage of cin and cout

- For cout:

```cpp
cout << var_name << "something" << var2_name << "something2" << endl;
```

- For cin, define the type of the variable you want to input first:

```cpp
string a;
cin >> a;
```

- For cin, the function `getline(cin, var_name)` is useful:

```
getline(cin, var_name);
cout << var_name;
return 0;
```

## 3. Compile and run:

After you wrote your program, it is important to first compile, then run, to compile, run this in your terminal:

```bash
g++ myfile.cpp -o pro_name
```

To run, run this right after compile (or in the same directory):

```bash
./pro_name
```
## This is the end of part I, go to see `phase1.cpp` to see more details for code usage.
