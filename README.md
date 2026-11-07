# Translator - a problem from SPOJ

Write a program that translates (word by word) a given text between two languages.

## Input

There is given a vocabulary and text to be translated as a sequence of words (lowercase letters only), newlines, and punctuation signs (`,`, `.`, `:`, `;`, `?`, `!`). 

The vocabulary consists of pairs of words of the form:

$$
w \text{ } t \text{\textbackslash n}
$$

where $w$ is the word in the first language, and $t$ is its translation to the second language. 

Between the vocabulary and the text, there is **exactly one empty line**. You may assume that:
- Each word has a maximum length of $20$ characters.
- The size of the vocabulary (i.e., the number of word pairs) is at most $5000$.

## Output

Print the translated text. You must translate only the words that exist in the vocabulary. All other content (unmapped words, spaces, punctuation, newlines) must be rewritten exactly as it is.

## Example

### Input

```
zdanie sentence
jest is
bardzo very

to jest bardzo easy zdanie.
zdanie jest? long;
zdanie jest short!
```

### Output

```
to is very easy sentence.
sentence is? long;
sentence is short!
```
