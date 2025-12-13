*This project has been created as part of the 42 curriculum by thtay*.

## Description
### Libft - Your very first own library
This repository is a collection of self-coded functions for use in the projects of my journey in 42Singapore. The contents of which include 43 functions.

## Instructions
`git clone` the repository into your working directory into a `libft` folder. The `Makefile` from this repository also needs to be mounted onto the working directory's `Makefile` for it to compile.

Compile this library into an archive `.a` file using the `make` command. <br/>
`make fclean` will remove all compiled files.

## Resources
The `manual`


## Overview of Deliverables
### Part 1 and 2 - Functions from `libc` and Additional Functions
This section covers 23 functions from the original `libc` library, as well as 11 supplementary functions `(denoted by 'ADV')` that build off these functions, totalling to 34 functions in this section.

Any external functions that are allowed while coding that function will be denoted under the function's name.

#### <hr>Single Character Checkers:

<table><tr>
<td colspan=4>The functions below take in a character <code>int c</code> and return an <code>int</code> value of either <code>0 (false)</code> or <code>1 (true)</code>.</td></tr><tr>

<td>ft_isalpha</td>
<td>Checks the passed character for an Alphabetic Character, disregarding capitalization.</td>

<td>ft_isdigit</td>
<td>Checks the passed character for a Numeric Character.
</td></tr><tr>

<td>ft_isalnum</td>
<td colspan=3>Checks the passed character for either of the above.
</tr><tr>

<td>ft_isprint</td>
<td>Checks the passed character if it is a "printable" character. This includes spaces, tabs <code>\t</code>, new lines <code>\n</code>, horizontal and vertical tabs <code>\h</code> and <code>\v</code>, form-feed <code>\f</code> or a carriage return <code>\r</code>.</td>

<td>ft_isascii</td>
<td>Checks the passed character if it is an ASCII Character between the range <code>0</code> and <code>127</code>.
</td></tr></table>


#### <hr>Letter Adjusters:

<table><tr>
<td colspan=4>The functions below take in a character <code>int c</code> and return an adjusted character <code>int</code>.</td></tr><tr>

<td>ft_toupper</td>
<td>Changes the given letter to <code>UPPERCASE</code></td>

<td>ft_tolower</td>
<td>Changes the given letter to <code>lowercase</code>
</td></tr></table>


<table><thead>
<td>Function</td><td>Description</td><td>Parameters</td><td>Return Value</td>
</thead>

<tr><td>ft_atoi</td>
<td>Converts the given string of characters <code>nptr</code> into an <code>int</code>.<br/>
Returns the converted value on success, or a <code>0</code> on error.
</td><td><code>const char *nptr</code></td>
<td><code>int</code></td></tr>

<tr><td><code>ADV</code><br/> ft_itoa<br/> <code>malloc</code></td>
<td>Converts the given integer <code>n</code> into a string of ASCII digits <code>char *</code> that represent the parsed <code>int</code>.<br/>
Returns the converted value on success, or a <code>0</code> on error.
</td><td><code>int n</code></td>
<td><code>char *</code></td>

</tr></table>


#### <hr>String Manipulation:

<table><thead>
<td>Function</td><td>Description</td><td>Parameters</td><td>Return Value</td>
</thead><tr>

<td>ft_strlen</td>
<td>Returns the length of the given string <code>s</code>.
</td><td><code>char *s</code></td>
<td><code>size_t</code></td></tr>

<tr><td>ft_strlcpy</td>
<td>As long as <code>size</code> is greater than <code>0</code>,<br/>
Copy up to <code>size - 1</code> characters from <code>src</code> to <code>dst</code>, NUL-terminating the result.<br/>
Returns the length of the given string <code>src</code>.</td>
<td rowspan=2><code>char *dst</code><br/><br/> <code>const char *src</code><br/><br/> <code>size_t size</code></td>
<td rowspan=2><code>size_t</code></td></tr>

<tr><td>ft_strlcat</td>
<td>As long as <code>dst</code> has free space, after the initial NUL-terminator,<br/>
Append up to <code>size - strlen(dst) - 1</code> characters from <code>src</code> to the end of <code>dst</code>, NUL-terminating the result. If there is no space, the NUL-termination does not happen.<br/>
Returns either the length of both strings <code>dst + src</code> OR <code>size</code>, whichever is smaller.</td></tr>

<tr><td>ft_strchr</td>
<td>Returns a pointer to the first occurrence of the character <code>c</code> in the given string <code>s</code>. If <code>c</code> is not found, then <code>NULL</code> is returned instead.<br/>
The NUL-terminator <code>\0</code> is a valid possible value for <code>c</code>.</td>
<td rowspan=2><code>const char *s</code><br/><br/> <code>int c</code></td>
<td rowspan=2><code>char *</code></td></tr>

<tr><td>ft_strrchr</td>
<td>The same as <code>ft_strchr</code>, but it instead returns a pointer to the <strong>last</strong> occurrence of the character <code>c</code> in the given string <code>s</code>.</td>

<tr><td>ft_strncmp</td>
<td>Compares up to the first <code>n</code> bytes (characters) of both <code>s1</code> and <code>s2</code>.<br/>
Returns a non-zero <code>int</code> based on the first byte of difference found, or <code>0</code> if both strings (up to <code>n</code> bytes) are equal.</td>
<td><code>const char *s1</code><br/><br/> <code>const char *s2</code><br/><br/> <code>size_t n</code></td>
<td><code>int</code></td></tr>

<tr><td>ft_strnstr</td>
<td>Similar to <code>ft_strchr</code>, wherein it returns the first occurrence of the needle string <code>little</code> in the haystack string <code>big</code> but limited to the first <code>len</code> characters.<br/>
Returns either a pointer to the first occurrence of <code>little</code> in <code>big</code><br/> <code>big</code> if <code>little</code> is empty <strong>OR</strong> <code>NULL</code> if <code>little</code> was not found.</td>
<td><code>const char *big</code><br/><br/> <code>const char *little</code><br/><br/> <code>size_t len</code></td>
<td><code>char *</code></td></tr>

<tr><td>ft_strdup<br/><code>malloc</code></td>
<td>Returns a pointer to an allocated address, containing the duplicated string of <code>s</code>.<br/>
Return <code>NULL</code> if the allocation fails.</td>
<td><code>const char *s</code></td>
<td><code>char *</code></td>
</tr></table>


<table><thead>
<tr><td colspan=4><strong><code>ADV</code> The below table consists of some additional functions detailed in <code>PART2</code> of the subject.</strong></td></tr>
<tr><td>Function</td><td>Description</td><td>Parameters</td><td>Return Value</td></tr></thead>

<tr><td>ft_substr<br/> <code>malloc</code></td>
<td>Returns a substring from the given string <code>s</code> based on the starting index <code>start</code>, for up to <code>len</code> bytes.<br/>
Allocates memory for the substring to be returned.<br/>
Returns <code>NULL</code> if the allocation fails.</td>
<td><code>char const *s</code><br/><br/> <code>unsigned int start</code><br/><br/> <code>size_t len</code></td>
<td rowspan=3><code>char *</code></td></tr>

<tr><td>ft_strjoin<br/> <code>malloc</code></td>
<td>Returns a substring from the given string <code>s</code> based on the starting index <code>start</code>, for up to <code>len</code> bytes.<br/>
Allocates memory for the substring to be returned.<br/>
Returns <code>NULL</code> if the allocation fails.</td>
<td><code>char const *s1</code><br/><br/> <code>char const *s2</code></td></tr>

<tr><td>ft_strjoin<br/> <code>malloc</code></td>
<td>Returns a substring from the given string <code>s</code> based on the starting index <code>start</code>, for up to <code>len</code> bytes.<br/>
Allocates memory for the substring to be returned.<br/>
Returns <code>NULL</code> if the allocation fails.</td>
<td><code>char const *s1</code><br/><br/> <code>char const *s2</code></td></tr>

<tr><td>ft_strjoin<br/> <code>malloc</code></td>
<td>Returns a substring from the given string <code>s</code> based on the starting index <code>start</code>, for up to <code>len</code> bytes.<br/>
Allocates memory for the substring to be returned.<br/>
Returns <code>NULL</code> if the allocation fails.</td>
<td><code>char const *s1</code><br/><br/> <code>char const *s2</code></td>
<td><code>char **</code></td>

</tr></table>


#### <hr/>Memory Manipulation

<table><thead><td>Function</td><td>Description</td><td>Parameters</td><td>Return Value</td>
</thead><tr>
<td>ft_bzero</td>
<td>Initializes the given memory area <code>s</code> of size <code>n</code> to a constant byte <code>0</code>.</td>
<td><code>void *s</code><br/><br/> <code>size_t n</code></td>
<td><code>void</code></td></tr><tr>

<td>ft_calloc<br/><code>malloc</code></td>
<td>Returns a pointer to an allocated array, of <code>nmemb * size</code> bytes, initialized to <code>0</code>.<br/>
If <code>nmemb</code> or <code>size</code> is <code>0</code>, a unique pointer that can be later passed to a <code>free()</code> function is returned.<br/>
Returns either <code>NULL</code> if the allocation fails <strong>OR</strong> should the arithmetic operation result in integer overflow.</td>
<td><code>size_t nmemb</code><br/><br/> <code>size_t size</code></td>
<td rowspan=5><code>void *</code></td></tr>

<tr><td>ft_memchr</td>
<td>Checks up to <code>n</code> bytes of memory <code>s</code> for the first occurrence of the character <code>c</code>.<br/>
Returns a pointer to the matching byte <strong>OR</strong> <code>NULL</code> if the character was not found in the given area.</td>
<td><code>const void *s</code><br/><br/> <code>int c</code><br/><br/> <code>size_t n</code></td>

<tr><td>ft_memcpy</td>
<td>Copies <code>n</code> bytes of memory from <code>src</code> to <code>dest</code>. Should the areas overlap, use <code>ft_memmove</code> instead.<br/>
Returns a pointer to <code>dest</code>.</td>
<td rowspan=2><code>void *dest</code><br/><br/> <code>const void *src</code><br/><br/> <code>size_t n</code></td></tr>

<tr><td>ft_memmove</td>
<td>The same as <code>ft_memcpy</code> but the memory areas may overlap. Should the areas overlap, <code>src</code> is copied to <code>dest</code> from the back, rather than from the front.<br/>
Returns a pointer to <code>dest</code>.</tr>

<tr><td>ft_memset</td>
<td>Sets the first <code>n</code> bytes of the memory area <code>s</code> to a constant byte <code>c</code>.<br/>
Returns a pointer to the memory area <code>s</code>.</td>
<td><code>void *s</code><br/><br/> <code>int c</code><br/><br/> <code>size_t n</code></td></tr>

<tr><td>ft_memcmp</td>
<td>Compares up to the first <code>n</code> bytes of both memory areas <code>s1</code> and <code>s2</code>.<br/>
Returns an <code>int (as unsigned char)</code> of the resulting arithmetic comparison of both strings, where a <code>0</code> is returned if both strings are equal.</td>
<td><code>const void *s1</code><br/><br/> <code>const void *s2</code><br/><br/> <code>size_t n</code></td>
<td><code>int</code></td>

</tr></table>


#### <hr/>`ADV` Writing to File Descriptors `fd`

<table><thead><tr><td colspan=4>For the below functions, they all have a given <code>int fd</code> (<code>or FILE *stream</code>), in which the function writes to. This is very similar to the implementation of the <code>PUTS(3)</code> class of functions in <code>libc</code>.</td></tr>
<tr><td colspan=4>Allowed Function: <code>write</code></td></tr>
<tr><td>Function</td><td>Description</td><td>Parameters</td><td>Return Value</td></tr>
</thead>

<tr><td>ft_putchar_fd</td>
<td>Writes the given character <code>c</code> into the given File Descriptor <code>fd</code>.</td>
<td><code>char c</code></td>
<td rowspan=4><code>void</code></td></tr>

<tr><td>ft_putstr_fd</td>
<td>Writes the given string <code>s</code> into the given File Descriptor <code>fd</code>.</td>
<td rowspan=2><code>char *s</code></td></tr>

<tr><td>ft_putendl_fd</td>
<td>Same as <code>ft_putstr_fd</code>, but additionally appends a newline character <code>\n</code> to the end of the string output.</tr>

<tr><td>ft_putnbr_fd</td>
<td>Writes the given integer <code>n</code> into the given File Descriptor <code>fd</code>.</td>
<td><code>int n</code></td>

</tr></table>


####

####