/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string (same as input)
 */
char *string_toupper(char *str)
{
    if (str == NULL)
        return NULL;

    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            /* Convert lowercase letter to uppercase */
            *ptr = *ptr - 'a' + 'A';
        }
        ptr++;
    }

    return str;
}
