# TAM
A small library for trigram analysis for use in cryptography.

## What is Trigram Analysis?
A trigram is a group of three letters. In certain languages, different trigrams appear more often than others. For example "THE", "AND", "ING" appear rather often in a piece of English text, whereas "ZWJ" would not. Trigram analysis is the process of quantifying exactly how close a piece of text's trigram frequencies match that of a given language.

## How to use
- Include `tris.h`
- Call `trigrams_load(const char* file)` to load the trigram frequency values.
- You can now analyse a string by calling `trigrams_fitness(char* txt, int len)`. The return value is an float of arbitrary units (higher is closer to English).
- Call `trigrams_free()` when your program ends.
