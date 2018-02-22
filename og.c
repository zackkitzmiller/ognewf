int og[4] = {0, 1, 2, 3};
int newfag[2] = {4, 5};

float og_size = sizeof(og) / sizeof(og[0]);
float newfag_size = sizeof(newfag) / sizeof(newfag[0]);

int total_size = 6;
float *total = malloc(total_size * sizeof(int));

memcpy(total, og, (og_size * sizeof(og[0])));
memcpy(total, newfag, newfag_size * sizeof(newfag[0]));

