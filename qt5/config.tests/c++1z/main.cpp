/* Generated by configure */
#if __cplusplus > 201402L
// Compiler claims to support experimental C++1z, trust it
#else
#  error __cplusplus must be > 201402L (the value for C++14)
#endif
#include <map>  // https://bugs.llvm.org//show_bug.cgi?id=33117
#include <variant>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    std::variant<int> v(42);
    int i = std::get<int>(v);
    std::visit([](const auto &) { return 1; }, v);
    /* END TEST */
    return 0;
}
