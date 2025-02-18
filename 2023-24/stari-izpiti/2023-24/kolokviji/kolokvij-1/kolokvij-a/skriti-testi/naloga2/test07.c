
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 230;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 1, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 2, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 3, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 4, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 5, "8JH9ARRpbhJ0oFIVHUWzPlDx2c5K38dJVbbojgD");
    izdelaj(nizi, 6, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 7, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 8, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 9, "zSX8bt70_6JRYzFiUWncqnvp");
    izdelaj(nizi, 10, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 11, "2OgCJdoQAdboWdONEPMFqRsyzEBOTXLh7tzSvhP6XK8");
    izdelaj(nizi, 12, "JiSDtd6D9n1Jgwd6XCwZ0wfqDrUlC5oJtCNz");
    izdelaj(nizi, 13, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 14, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 15, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 16, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 17, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 18, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 19, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 20, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 21, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 22, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 23, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 24, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 25, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 26, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 27, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 28, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 29, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 30, "EEka9Ty1HwjL");
    izdelaj(nizi, 31, "3EYT0fDzy6naBzVxg6rc2YEGVLITasuGGmHxknL8GS8SjFebmndiZG9wmISzN1dQ3xWMxdOrEOr4mEUzsba02w_hbQAl402Y");
    izdelaj(nizi, 32, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 33, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 34, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 35, "MhOLiIxQlXsrxWDfwjdnyaoBp2h2L25Cp3nd6VmGW2qBBxrr_OyXanHJerxo3alL76rv");
    izdelaj(nizi, 36, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 37, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 38, "s5CRnhp4NkK3Kgkdosoai_9rpfL12tsqOz1baANWJsgZZdq0qoQwAjZIPxQRLOoO8Z");
    izdelaj(nizi, 39, "fNPGmmj14S0Zupqcaw_3V1uLNF_klz1b8cWGZtmnbxBOXLwRljC0R7AcQPg7VLwFKB7");
    izdelaj(nizi, 40, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 41, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 42, "XwcXzKRY2hJbeqbxh0TRGNIedUwogBJ17xqBaq7TzG8s7OTjNVXdLdYrK2Wyh");
    izdelaj(nizi, 43, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 44, "W4tNr5617uR5lKsVwAAQEmd9t6s8rnREfxptsFugjdnR");
    izdelaj(nizi, 45, "nojGTtEwaHGXf5pWq4pKv_DlfNq");
    izdelaj(nizi, 46, "XwcXzKRY2hJbeqbxh0TRGNIedUwogBJ17xqBaq7TzG8s7OTjNVXdLdYrK2Wyh");
    izdelaj(nizi, 47, "fC_dAJeiHLHaK8CKqhIZ1MaBitXP2dXXIaEUqaHQ05WwMrwb91nDHmxCDv4dvQPYrxGjswRNo1");
    izdelaj(nizi, 48, "EEka9Ty1HwjL");
    izdelaj(nizi, 49, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 50, "s5CRnhp4NkK3Kgkdosoai_9rpfL12tsqOz1baANWJsgZZdq0qoQwAjZIPxQRLOoO8Z");
    izdelaj(nizi, 51, "QAYTOa0OWHFQBYOWC6CBZBlnwvaIaq51D6mXm8");
    izdelaj(nizi, 52, "m57F0p9mt0_tYfttwa2fLzTyCThtGNI6qZlll3oKq");
    izdelaj(nizi, 53, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 54, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 55, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 56, "9saHBPh0A18");
    izdelaj(nizi, 57, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 58, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 59, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 60, "Zj");
    izdelaj(nizi, 61, "Ulh1sSPp0L0WQ6DOxNkQyi1F17cXcwTDqw2AscS");
    izdelaj(nizi, 62, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 63, "DCfhvMcOjo_bxBC5eV8de");
    izdelaj(nizi, 64, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 65, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 66, "KBhg");
    izdelaj(nizi, 67, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 68, "E8PexiZe5J0bClJxmb63dEoLdm7yJQ4CWbQXXPCoKJgCNW5x4a0ff4r4Ra");
    izdelaj(nizi, 69, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 70, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 71, "3rZw4JpO87fyQdSUadNr5YmIEw1bzMGMxL");
    izdelaj(nizi, 72, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 73, "fmC_qeiwv5nGR3zPZ9EfuEjraxAzewfibaNvDy7CwbAV");
    izdelaj(nizi, 74, "7l_RiA8JdZIa88VYJvx85FV9s0_FCXR9smZNeQjYMhcFBVfxtBeA9G88mVHMEtUMj5sjO6fB3UEnANzhWPkX4PAEW6q");
    izdelaj(nizi, 75, "JiSDtd6D9n1Jgwd6XCwZ0wfqDrUlC5oJtCNz");
    izdelaj(nizi, 76, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 77, "KBhg");
    izdelaj(nizi, 78, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 79, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 80, "EEka9Ty1HwjL");
    izdelaj(nizi, 81, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 82, "C5PLLISjUooR7vm4p_4eoL2c7GHqqmHn0QeyC48eCAKoIzNemJPEJWWyqYBPALV_Zt8DFN09pfzyZC7MJLiPSWdnKeuw5iA0vO");
    izdelaj(nizi, 83, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 84, "Kj9n0bvRP4tM6PX");
    izdelaj(nizi, 85, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 86, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 87, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 88, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 89, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 90, "lCPAeLaCGqEF0d30KMhdmmTJ9_TnrbN3mtbsGj1vau6TJGDGY_GcEVixTydUs3meQPH0P2IqziRFzn2jcuALZ2");
    izdelaj(nizi, 91, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 92, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 93, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 94, "Ck3u__L7PK_sE9hx9Nfn7x7mB9l30n5tNO8YVKD5mLMlLyh5bOW_Jwj8Nx0S47bwfztxPWSEKYrCP2NEBNkqBXvnnIjYwNxE5_g");
    izdelaj(nizi, 95, "Z4FekgCCn2cvxwVGleBYVrgsY7SH69k1cHrHc92q2tuWxYNySOpegDfcPnBHfCk0cC48l1LJporzCKOKNtlW5MBAwucQ3gCa");
    izdelaj(nizi, 96, "Kj9n0bvRP4tM6PX");
    izdelaj(nizi, 97, "stFEznn8dwu7l8jtlhnWYsRUQUlZ8KQX");
    izdelaj(nizi, 98, "Kj9n0bvRP4tM6PX");
    izdelaj(nizi, 99, "KBhg");
    izdelaj(nizi, 100, "zSX8bt70_6JRYzFiUWncqnvp");
    izdelaj(nizi, 101, "lozH3Zllnu2UJoXjLazufkOxI66CNZrlP8bOS2WP8V4WZsPSPc");
    izdelaj(nizi, 102, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 103, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 104, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 105, "QAYTOa0OWHFQBYOWC6CBZBlnwvaIaq51D6mXm8");
    izdelaj(nizi, 106, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 107, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 108, "3EYT0fDzy6naBzVxg6rc2YEGVLITasuGGmHxknL8GS8SjFebmndiZG9wmISzN1dQ3xWMxdOrEOr4mEUzsba02w_hbQAl402Y");
    izdelaj(nizi, 109, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 110, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 111, "3rZw4JpO87fyQdSUadNr5YmIEw1bzMGMxL");
    izdelaj(nizi, 112, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 113, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 114, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 115, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 116, "d41neHX6jC4b6b");
    izdelaj(nizi, 117, "eZrB4zMUygnjBSJXmUop2LBQiKW10g9fDJED0C_rZlJDjlJ_ifD8hUs1zaICTVJLjeQaUde7uB1Ecr87dcAkLi6JOG_Hl74N7");
    izdelaj(nizi, 118, "EEka9Ty1HwjL");
    izdelaj(nizi, 119, "yPJ8zw3Brn_v");
    izdelaj(nizi, 120, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 121, "VewD7hIAnkIXXZCoDTX4NZWlGzaDD_7D2kPCX6cBP0DZtuEO9mYZ8BwxkugIU6dQs4IyU0tjh1ic1BFkyGDOWliqnc4xj9f");
    izdelaj(nizi, 122, "Z4FekgCCn2cvxwVGleBYVrgsY7SH69k1cHrHc92q2tuWxYNySOpegDfcPnBHfCk0cC48l1LJporzCKOKNtlW5MBAwucQ3gCa");
    izdelaj(nizi, 123, "7zLZANONpEGZl4tj6pg4j1g6LsnjME2hDd0wkdw9Evyf9xb1lnb");
    izdelaj(nizi, 124, "s5CRnhp4NkK3Kgkdosoai_9rpfL12tsqOz1baANWJsgZZdq0qoQwAjZIPxQRLOoO8Z");
    izdelaj(nizi, 125, "twUuKETmSHq5_7nXUAVL8n5kYPGn2AtG5yVPpLQuFAFhMJTNoMOXy5ZvxzZ9");
    izdelaj(nizi, 126, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 127, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 128, "Z57rxDKeKBIkt35Oeb3o2awi0xPJgwaHbUQx0023QnVF4Pw4LTsiZph7Fl");
    izdelaj(nizi, 129, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 130, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 131, "s5CRnhp4NkK3Kgkdosoai_9rpfL12tsqOz1baANWJsgZZdq0qoQwAjZIPxQRLOoO8Z");
    izdelaj(nizi, 132, "W4tNr5617uR5lKsVwAAQEmd9t6s8rnREfxptsFugjdnR");
    izdelaj(nizi, 133, "MhOLiIxQlXsrxWDfwjdnyaoBp2h2L25Cp3nd6VmGW2qBBxrr_OyXanHJerxo3alL76rv");
    izdelaj(nizi, 134, "PwPRqqZjRKjMTQY9vGCcE5Q7XVjmUmT4btPNuqvkVSOqQDAe6pM_7En7WXTRsWDKoUy91KdyZ_Is6_2PPMIr2Ch5");
    izdelaj(nizi, 135, "6mW6rCLlelCrZjlMmbAc4yhe5AghMnKM3LDaDw7rMAz5LchxRgsFzQMrKlarIs6vmyCwTCuh6ggOB8OEZNudf4rrDhjnZ");
    izdelaj(nizi, 136, "MD3JlGwwZdQZL1LSnrXl2Swh_IxOb");
    izdelaj(nizi, 137, "m57F0p9mt0_tYfttwa2fLzTyCThtGNI6qZlll3oKq");
    izdelaj(nizi, 138, "eyu9c1_l_4DRYBeyWrWZwdErNWZ0b4pZHtEqdp6yMTAsAHlOzC6GdVjBWf8PyJmkylqNz5_05hgNQ9myUv6x9");
    izdelaj(nizi, 139, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 140, "KlCIszbcbxcXIMFvGTfaxptBi1LG4EkmMDPNPD1sQFOKFD730qh8zaJeGwK6dnvNRYvcK56ETBvT7i");
    izdelaj(nizi, 141, "KBhg");
    izdelaj(nizi, 142, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 143, "tsB61YUSolVcO4i2bj7A7IUu2zS7FyiUvkLu2eNDpYTf6ZggxMNZQMqXkaxrJyFg4NJLeAUAhsCTBK0CVyEHzHU1RBD");
    izdelaj(nizi, 144, "c4mI4X");
    izdelaj(nizi, 145, "KMxsgdPpJIEziCTWxItV04t6IaernB977i2r1I");
    izdelaj(nizi, 146, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 147, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 148, "C3RrmgCAbzhDkNEJSwN8QRl");
    izdelaj(nizi, 149, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 150, "KBhg");
    izdelaj(nizi, 151, "JyW1Ju48PmpJKcvQQEMalzLQcbvJVkL3xeHJgNsjSmtKCoaXbeLr2HvltH");
    izdelaj(nizi, 152, "DHFQ1wjzQzl93ZWJWHHwNJ8Fs2ftNTxmnfIk4Iypqb6ulRFeQUVO7j046LGNK8ItxacARXe3jdA391vrqVn4D");
    izdelaj(nizi, 153, "QAYTOa0OWHFQBYOWC6CBZBlnwvaIaq51D6mXm8");
    izdelaj(nizi, 154, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 155, "OATy6qwtlTYCoGixBOz7");
    izdelaj(nizi, 156, "fC_dAJeiHLHaK8CKqhIZ1MaBitXP2dXXIaEUqaHQ05WwMrwb91nDHmxCDv4dvQPYrxGjswRNo1");
    izdelaj(nizi, 157, "Ej9T85HMwqTCZ_VG98Cd_4MpZHG_HI722IHvqep7N4TWKnF7Ru");
    izdelaj(nizi, 158, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 159, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 160, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 161, "KlCIszbcbxcXIMFvGTfaxptBi1LG4EkmMDPNPD1sQFOKFD730qh8zaJeGwK6dnvNRYvcK56ETBvT7i");
    izdelaj(nizi, 162, "tsB61YUSolVcO4i2bj7A7IUu2zS7FyiUvkLu2eNDpYTf6ZggxMNZQMqXkaxrJyFg4NJLeAUAhsCTBK0CVyEHzHU1RBD");
    izdelaj(nizi, 163, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 164, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 165, "Kj9n0bvRP4tM6PX");
    izdelaj(nizi, 166, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 167, "lhLXGKSt5mOFKOYXSi_6P6Xpv");
    izdelaj(nizi, 168, "csqBtcQPtdqYyTUF_m71HjJiPO9t0355v4EqQEmoLh0lcKtrGk5aoXi0yBSakZNGAdVEL00NH1SaiRMi9GeYvTqxB");
    izdelaj(nizi, 169, "MD3JlGwwZdQZL1LSnrXl2Swh_IxOb");
    izdelaj(nizi, 170, "LzzZOVns2gjZDSGAh");
    izdelaj(nizi, 171, "Fn7");
    izdelaj(nizi, 172, "7l_RiA8JdZIa88VYJvx85FV9s0_FCXR9smZNeQjYMhcFBVfxtBeA9G88mVHMEtUMj5sjO6fB3UEnANzhWPkX4PAEW6q");
    izdelaj(nizi, 173, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 174, "JwnvTuK7");
    izdelaj(nizi, 175, "FaN31_ZpIeU1sEHuzwl5z6MPnW6kiPWzdXy5FAXRmSD9c2asgVKnf2VCRkQNhj2VA");
    izdelaj(nizi, 176, "wb5oQoxB9Bg2uTDapf4MRO7Nu1yjLQJPg1A16C_4OTTJmXwDqsaGDvQ0HJrD_QMXeD83xtqL4CJpJk7y53V2bJtfurb");
    izdelaj(nizi, 177, "twUuKETmSHq5_7nXUAVL8n5kYPGn2AtG5yVPpLQuFAFhMJTNoMOXy5ZvxzZ9");
    izdelaj(nizi, 178, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 179, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 180, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 181, "lCPAeLaCGqEF0d30KMhdmmTJ9_TnrbN3mtbsGj1vau6TJGDGY_GcEVixTydUs3meQPH0P2IqziRFzn2jcuALZ2");
    izdelaj(nizi, 182, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 183, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 184, "CTrTtqZB9SH");
    izdelaj(nizi, 185, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 186, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 187, "XwcXzKRY2hJbeqbxh0TRGNIedUwogBJ17xqBaq7TzG8s7OTjNVXdLdYrK2Wyh");
    izdelaj(nizi, 188, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 189, "fNPGmmj14S0Zupqcaw_3V1uLNF_klz1b8cWGZtmnbxBOXLwRljC0R7AcQPg7VLwFKB7");
    izdelaj(nizi, 190, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 191, "POdpz5QgBqtIT9UkAVwx41nImaVXsuIJhb2Oci77dounEzKPZoig659VzzRiUZdsyN");
    izdelaj(nizi, 192, "36lrz0Xp2arB8UBecLnFJz9I6YG0n9gB6sCWAgbJxXS2X0sgLzlEjurGxm7NylgpAlCr2_Fq6J3mnPBRsqauiG");
    izdelaj(nizi, 193, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 194, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 195, "XwcXzKRY2hJbeqbxh0TRGNIedUwogBJ17xqBaq7TzG8s7OTjNVXdLdYrK2Wyh");
    izdelaj(nizi, 196, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 197, "ueCxJ_Z9VJGs1odKb");
    izdelaj(nizi, 198, "DHFQ1wjzQzl93ZWJWHHwNJ8Fs2ftNTxmnfIk4Iypqb6ulRFeQUVO7j046LGNK8ItxacARXe3jdA391vrqVn4D");
    izdelaj(nizi, 199, "m57F0p9mt0_tYfttwa2fLzTyCThtGNI6qZlll3oKq");
    izdelaj(nizi, 200, "kNsPMaiaovIjpMCEpErw0cu5tkXpau0El0aaWGzLa0OCE6jp9aHrVtBZ7Skn4lhJP4QTgAov3QGYe");
    izdelaj(nizi, 201, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 202, "ihk7Vy_eVZhkaAk1mSlWbX_Qfok5bHqxGIY0YVgOKu");
    izdelaj(nizi, 203, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 204, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 205, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 206, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 207, "6QLjg4IpXRCksMmLR2_EA1ZlCeoPhxGnGnBwjGqaRlOY3");
    izdelaj(nizi, 208, "kNsPMaiaovIjpMCEpErw0cu5tkXpau0El0aaWGzLa0OCE6jp9aHrVtBZ7Skn4lhJP4QTgAov3QGYe");
    izdelaj(nizi, 209, "oGOwcqBfnUD366tmJKJ7no7hVP_Qvw6tC_35yy0wO4OIhaQ6mkCYgCu3NEfDTZaODJ28SN6Ux9TVHxL9v_iZ_18gYl");
    izdelaj(nizi, 210, "n7jmeoH3m4e3WiL4RlQNHLglyT0tM7iW8n");
    izdelaj(nizi, 211, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 212, "Kj9n0bvRP4tM6PX");
    izdelaj(nizi, 213, "EEka9Ty1HwjL");
    izdelaj(nizi, 214, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 215, "DCfhvMcOjo_bxBC5eV8de");
    izdelaj(nizi, 216, "VU6a4VYI2hnU87Q5S2lIVuOaTyqKdBTiO_K4QHIrYkNRVRixyIhRkeK_Eq3iSrYW4v6unJWj");
    izdelaj(nizi, 217, "lJoMUgEPJt5Na8eiZhUnVUU_Hx3mL");
    izdelaj(nizi, 218, "pSmxbqje53FDxcn6jAIptk");
    izdelaj(nizi, 219, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 220, "MhOLiIxQlXsrxWDfwjdnyaoBp2h2L25Cp3nd6VmGW2qBBxrr_OyXanHJerxo3alL76rv");
    izdelaj(nizi, 221, "eyu9c1_l_4DRYBeyWrWZwdErNWZ0b4pZHtEqdp6yMTAsAHlOzC6GdVjBWf8PyJmkylqNz5_05hgNQ9myUv6x9");
    izdelaj(nizi, 222, "AeVEBexmHV5K4_nQh2MTdigO15dxh4tHJnxPz6wLc9lS0wXpOXjUZc");
    izdelaj(nizi, 223, "LdkI3DmkYa6XK7d_sQItpFCYiI7UfNAtHapUgBe65FYrStt3aYnlyxPE1UChM");
    izdelaj(nizi, 224, "lCPAeLaCGqEF0d30KMhdmmTJ9_TnrbN3mtbsGj1vau6TJGDGY_GcEVixTydUs3meQPH0P2IqziRFzn2jcuALZ2");
    izdelaj(nizi, 225, "lJoMUgEPJt5Na8eiZhUnVUU_Hx3mL");
    izdelaj(nizi, 226, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 227, "YgvVIa9F9UzSFlUtFviQYaqFll4xm8nS68jBcaWG9YSj1asYBqDgWmjrXrAFYJ6oMelv_yvYabrxvQKS7rvracABrtnO13D");
    izdelaj(nizi, 228, "W4tNr5617uR5lKsVwAAQEmd9t6s8rnREfxptsFugjdnR");
    izdelaj(nizi, 229, "7l_RiA8JdZIa88VYJvx85FV9s0_FCXR9smZNeQjYMhcFBVfxtBeA9G88mVHMEtUMj5sjO6fB3UEnANzhWPkX4PAEW6q");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
