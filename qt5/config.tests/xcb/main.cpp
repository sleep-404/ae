/* Generated by configure */
#include <xcb/xcb.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    int primaryScreen = 0;
    (void)xcb_connect("", &primaryScreen);
    // This won't compile unless libxcb >= 1.9 which defines XCB_CONN_CLOSED_INVALID_SCREEN.
    int xcbScreenError = XCB_CONN_CLOSED_INVALID_SCREEN;
    /* END TEST */
    return 0;
}
