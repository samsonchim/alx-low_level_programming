#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59; /* Length of the message */

    ssize_t bytes_written = write(2, message, len);

    if (bytes_written == len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
