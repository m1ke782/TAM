#ifndef TRIS_HEADER
#define TRIS_HEADER

extern int* TRIGRAMS;
void trigrams_load(const char* file);
void trigrams_free();
float trigrams_fitness(char* txt, int len);

#endif
