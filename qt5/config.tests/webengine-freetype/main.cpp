/* Generated by configure */
#include <ft2build.h>
#include FT_FREETYPE_H
#if ((FREETYPE_MAJOR*10000 + FREETYPE_MINOR*100 + FREETYPE_PATCH) < 20402)
#  error This version of freetype is too old.
#endif
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    FT_Face ft_face = 0;
    FT_Reference_Face(ft_face);
    /* END TEST */
    return 0;
}
