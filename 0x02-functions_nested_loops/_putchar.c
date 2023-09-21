#include <unistd.h>\n\nint _putchar(char c)\n{\n    return write(1, &c, 1);\n}
