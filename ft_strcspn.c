#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (reject[i] && *s != reject[i])
            i++;
        if (reject[i] != '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}
#include <stdio.h>
#include <stdio.h>
#include <string.h> // For comparison with the standard function

int main()
{
    const char *s = "hellefo worldteht";
    const char *reject = "w";

    // Using custom implementation
    size_t result = ft_strcspn(s, reject);

    // Using standard library function
    size_t expected = strcspn(s, reject);

    printf("Custom: %zu\n", result); // Output: 4
    printf("Standard: %zu\n", expected); // Output: 4

    return 0;
}
