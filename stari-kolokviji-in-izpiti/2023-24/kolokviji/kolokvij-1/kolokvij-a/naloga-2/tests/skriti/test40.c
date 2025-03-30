
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
    int n = 235;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 1, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 2, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 3, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 4, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 5, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 6, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 7, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 8, "QiTMsC7PW4Pqa5E5gE21MyGgqKoJilkzSU7d3rr5F_kVjF8w4PcKTwjwl1oMY5ufo0FZcLBxMMB8cA3upiB9RgROp00ob");
    izdelaj(nizi, 9, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 10, "QiTMsC7PW4Pqa5E5gE21MyGgqKoJilkzSU7d3rr5F_kVjF8w4PcKTwjwl1oMY5ufo0FZcLBxMMB8cA3upiB9RgROp00ob");
    izdelaj(nizi, 11, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 12, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 13, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 14, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 15, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 16, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 17, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 18, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 19, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 20, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 21, "CiYBdI0_ZDAQfdTCtzTQ2ASz");
    izdelaj(nizi, 22, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 23, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 24, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 25, "9fLVt3peZEuINqEn6O9_hmU8y8_NN7D60mxGA8FJM51mCRB9WcCjYIwKw");
    izdelaj(nizi, 26, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 27, "C3UlUJguA0wET9w8YGJ88nH8PG2SwGHdcV9");
    izdelaj(nizi, 28, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 29, "QiTMsC7PW4Pqa5E5gE21MyGgqKoJilkzSU7d3rr5F_kVjF8w4PcKTwjwl1oMY5ufo0FZcLBxMMB8cA3upiB9RgROp00ob");
    izdelaj(nizi, 30, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 31, "NfQBqbrZ7FqutGjuMeR1jIxmFEKyQAocvIuLmkXtZip128KcwJcHK0ECqWTR9rytnvf_L4rRe9lTbxVdZ1M");
    izdelaj(nizi, 32, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 33, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 34, "vnkxecHIrlAQkikHhyfvZbNUGm57JxBYVXqjDBcacJ1ak9FK8MOJIiEHMus8vQI58");
    izdelaj(nizi, 35, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 36, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 37, "t5T54lKDs6rbEC1CQPTKwGCpcutKktmy2nDLVlMhXko");
    izdelaj(nizi, 38, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 39, "C3UlUJguA0wET9w8YGJ88nH8PG2SwGHdcV9");
    izdelaj(nizi, 40, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 41, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 42, "Hx_GV1fux5OYr7ytn4nMY0kuwOtNfIlz");
    izdelaj(nizi, 43, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 44, "LczisjUWB9XVkKNAFu7s_YeEJlaOu5gjdzgwlq12rfpivDIcM__TDOxXvGHqwuSBptXAEQu0zvh7");
    izdelaj(nizi, 45, "5x3Ey_ceYDvAlTMKegeHeVL6_PrHGib6G7nj5qMJwVR2BwzRfYp");
    izdelaj(nizi, 46, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 47, "HGlWYOI5IYu2ffGg91mhiSEiaL331FxqX_KVgEcJIZu3QUO2N4sHrBnCo");
    izdelaj(nizi, 48, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 49, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 50, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 51, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 52, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 53, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 54, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 55, "UKF3xCQ_FEUAkF7gWUWnQfD7S_FOpxLQ3E8Xw6m4KYT1dXeLCqzs0FlRuqnGY7R6IiVMCrRT");
    izdelaj(nizi, 56, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 57, "UKF3xCQ_FEUAkF7gWUWnQfD7S_FOpxLQ3E8Xw6m4KYT1dXeLCqzs0FlRuqnGY7R6IiVMCrRT");
    izdelaj(nizi, 58, "9fLVt3peZEuINqEn6O9_hmU8y8_NN7D60mxGA8FJM51mCRB9WcCjYIwKw");
    izdelaj(nizi, 59, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 60, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 61, "Nv_Z");
    izdelaj(nizi, 62, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 63, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 64, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 65, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 66, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 67, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 68, "t5T54lKDs6rbEC1CQPTKwGCpcutKktmy2nDLVlMhXko");
    izdelaj(nizi, 69, "ey2m31qEvu_GjqTD_7anDi6feQmkKWmAHfH7lOIb2ucfIBcgMJtUHv6eRLT4mgshcHWEFt88y0klPqS");
    izdelaj(nizi, 70, "qjxx3YWRlBwZTl67OlO5PAOhWrR");
    izdelaj(nizi, 71, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 72, "9fLVt3peZEuINqEn6O9_hmU8y8_NN7D60mxGA8FJM51mCRB9WcCjYIwKw");
    izdelaj(nizi, 73, "D87P9raZU2");
    izdelaj(nizi, 74, "X6zauipe3v2Tp");
    izdelaj(nizi, 75, "1MOkavQJilUYkWjn1GIKAKY1O2GHt1n6X8SUBI");
    izdelaj(nizi, 76, "bMg374UKOekCFokLLPQK");
    izdelaj(nizi, 77, "UWWmMDVYOXRVs5fhU9bP_4wMgKjzTXBEfIBzxn3QAAgiZuPeUoehgQ1VPP");
    izdelaj(nizi, 78, "8Ck1NahKH5AnoFRK9jgBrFWKuGVBE_xhMMNoMPx1i9tz5r9KkGB40iIxW6c6yjGZc");
    izdelaj(nizi, 79, "YD_mDSB_IbYXWMC9yG0LuzOh5BC6qmPAaBTRKRZpoj3uR8jegEGcyv");
    izdelaj(nizi, 80, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 81, "UKF3xCQ_FEUAkF7gWUWnQfD7S_FOpxLQ3E8Xw6m4KYT1dXeLCqzs0FlRuqnGY7R6IiVMCrRT");
    izdelaj(nizi, 82, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 83, "ey2m31qEvu_GjqTD_7anDi6feQmkKWmAHfH7lOIb2ucfIBcgMJtUHv6eRLT4mgshcHWEFt88y0klPqS");
    izdelaj(nizi, 84, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 85, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 86, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 87, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 88, "_vvC6_Qln8wj4Elu");
    izdelaj(nizi, 89, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 90, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 91, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 92, "9fLVt3peZEuINqEn6O9_hmU8y8_NN7D60mxGA8FJM51mCRB9WcCjYIwKw");
    izdelaj(nizi, 93, "ey2m31qEvu_GjqTD_7anDi6feQmkKWmAHfH7lOIb2ucfIBcgMJtUHv6eRLT4mgshcHWEFt88y0klPqS");
    izdelaj(nizi, 94, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 95, "t5T54lKDs6rbEC1CQPTKwGCpcutKktmy2nDLVlMhXko");
    izdelaj(nizi, 96, "yFReTiYYDegAZm7DmMkb48uc2laX5i0_uSeLXk3XG19n_Og23T5XzrEIKOVl0USXSAqmKrsUcppWGD8hp0ADa1GZCYM");
    izdelaj(nizi, 97, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 98, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 99, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 100, "j8NVn3Btl7lZ0t3i5K9rb_CsKrR5AcN_0nZAfDI_kMHtEIfzAAKBv6n1uPMGd1hQh6eR0EG5D8tYp5Du65ui9S");
    izdelaj(nizi, 101, "fVLI7zzjj03gbONnWryKZcas29RPQzldOUZBIR12i4mkGM4NodXZ5NVKjoCYZU_GBqvkn_SJ6JvND2vSG55UJWUoxoAw");
    izdelaj(nizi, 102, "t5T54lKDs6rbEC1CQPTKwGCpcutKktmy2nDLVlMhXko");
    izdelaj(nizi, 103, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 104, "aDdkEEJoPsp_Q7NVgm7hZ2BYQS5iPWGkmArNSz_w7yTaFeIi8qbqnhHi");
    izdelaj(nizi, 105, "xHeWGF5__uk5xfgfBfTRHBiuDJehmsVSBZ7U9dazBiNbOCnRnnJtPXNUiF6_5lEmfPxrb5uM6bI_0azAoKosQPAMmfnE3Sr5LaH");
    izdelaj(nizi, 106, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 107, "HiduRJFcot89ASASjM");
    izdelaj(nizi, 108, "yFReTiYYDegAZm7DmMkb48uc2laX5i0_uSeLXk3XG19n_Og23T5XzrEIKOVl0USXSAqmKrsUcppWGD8hp0ADa1GZCYM");
    izdelaj(nizi, 109, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 110, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 111, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 112, "1MOkavQJilUYkWjn1GIKAKY1O2GHt1n6X8SUBI");
    izdelaj(nizi, 113, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 114, "fjpg2Q");
    izdelaj(nizi, 115, "quQYP0LnhmjsfhEWdUpBYEgODwa");
    izdelaj(nizi, 116, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 117, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 118, "oXzFtQFJ1mc62YyQJiGYlalPpZ5QTHupfmn1lmuhja6EnZgkej_dCxfsy0Tj2swVWVbVgWUITXj0Yy05Jg95aBEo0qBM6O");
    izdelaj(nizi, 119, "RdUGLoor7nl1wZbX6zvmzDwoQ2SCItKEPOcEciqj9KqN6v85T48ZqlSU9Jv65aEWUYuQ9y92");
    izdelaj(nizi, 120, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 121, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 122, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 123, "HGlWYOI5IYu2ffGg91mhiSEiaL331FxqX_KVgEcJIZu3QUO2N4sHrBnCo");
    izdelaj(nizi, 124, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 125, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 126, "_vvC6_Qln8wj4Elu");
    izdelaj(nizi, 127, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 128, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 129, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 130, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 131, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 132, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 133, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 134, "TVaIoXB5eM7JX3B9gObZHfNOHQOhCPMuDWGkseK6jiPXIptw39xQfR8dAGmDXfODReA");
    izdelaj(nizi, 135, "YD_mDSB_IbYXWMC9yG0LuzOh5BC6qmPAaBTRKRZpoj3uR8jegEGcyv");
    izdelaj(nizi, 136, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 137, "hWid1_KSY4sf5Ozw_9KNuLvShtd5gsDi8s1pzkbyVatqWoVDH7wDdz2cDw");
    izdelaj(nizi, 138, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 139, "t82XLUUfgwMff0RJVMAt2G8_M");
    izdelaj(nizi, 140, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 141, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 142, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 143, "kmhKZbL6jogHbAxcJvsOve2pKp5sHH7j7r");
    izdelaj(nizi, 144, "UKF3xCQ_FEUAkF7gWUWnQfD7S_FOpxLQ3E8Xw6m4KYT1dXeLCqzs0FlRuqnGY7R6IiVMCrRT");
    izdelaj(nizi, 145, "UKF3xCQ_FEUAkF7gWUWnQfD7S_FOpxLQ3E8Xw6m4KYT1dXeLCqzs0FlRuqnGY7R6IiVMCrRT");
    izdelaj(nizi, 146, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 147, "_vvC6_Qln8wj4Elu");
    izdelaj(nizi, 148, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 149, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 150, "X1QRzo4i9Yy3XdmsFeP4Mtcr0IMUGsEWUl0FnBBHFReks0up");
    izdelaj(nizi, 151, "vUftUhmXgZ3a1m_RmNot5dOvKx_Ff9PhjWYkJwRKV_wQGFfRL");
    izdelaj(nizi, 152, "X1QRzo4i9Yy3XdmsFeP4Mtcr0IMUGsEWUl0FnBBHFReks0up");
    izdelaj(nizi, 153, "XOMUiLxQ_ORmwnKXV1pr");
    izdelaj(nizi, 154, "ItqoOP4");
    izdelaj(nizi, 155, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 156, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 157, "j8NVn3Btl7lZ0t3i5K9rb_CsKrR5AcN_0nZAfDI_kMHtEIfzAAKBv6n1uPMGd1hQh6eR0EG5D8tYp5Du65ui9S");
    izdelaj(nizi, 158, "EIOSyazOd4V9UBUFM5pELrg4nILFTfqPW3_7d2P641xbkLvY2L");
    izdelaj(nizi, 159, "X4YW_M3IbWgGWdDk120YQ4_WeGpLL1lDgRehuugVCrrL0vQs1Yl52JpLlyFjnAxNT9Z5ue");
    izdelaj(nizi, 160, "ReTNNwHP2Qdw_LsxvITxgg_L8ycHOIbvhc6_Nox8t4kI01PFTBxFZ6xRH35Ul78DS42VTUJCDP1Y0cP6vT8eEH6qe5");
    izdelaj(nizi, 161, "5xxmJha9hbGUBG5ytndtxsSe02RvcKGXY44UxOEb2EL");
    izdelaj(nizi, 162, "RdUGLoor7nl1wZbX6zvmzDwoQ2SCItKEPOcEciqj9KqN6v85T48ZqlSU9Jv65aEWUYuQ9y92");
    izdelaj(nizi, 163, "2rHTyDE2e9hvpcyEwZqB0eVxp");
    izdelaj(nizi, 164, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 165, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 166, "ey2m31qEvu_GjqTD_7anDi6feQmkKWmAHfH7lOIb2ucfIBcgMJtUHv6eRLT4mgshcHWEFt88y0klPqS");
    izdelaj(nizi, 167, "jF8Qat6yXMHYDiXcekw7qDMoWiwJQD95PhK99whzojnwGAhuP2ViY2iOYfMXCzuem5_1KrmhNU_RC0H40mH5Q9G");
    izdelaj(nizi, 168, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 169, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 170, "t5T54lKDs6rbEC1CQPTKwGCpcutKktmy2nDLVlMhXko");
    izdelaj(nizi, 171, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 172, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 173, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 174, "zSX8bt70_6JRYzFiUWncqnvp");
    izdelaj(nizi, 175, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 176, "zSX8bt70_6JRYzFiUWncqnvp");
    izdelaj(nizi, 177, "P9zca3vtbuDV0omFMTdZClfF2qo3Mc1da");
    izdelaj(nizi, 178, "vwxDEoufsI2926n9T9JF1y426UUMd6MswSZwgzL0LYMc7F7wbJ36QlgIgmWAGtvIrzlCWjyClWh4QQrLfLCUNYiDY50ZfY");
    izdelaj(nizi, 179, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 180, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 181, "Ptupkg74fNs1cj4dylglb2h0mphoLLolHy940uz7CfH6E2AmVlbiVOJTHxYT15WNjx8AtO90GagoA0fJ8F");
    izdelaj(nizi, 182, "VvI8nxtahUU52KKaFbKO");
    izdelaj(nizi, 183, "AQAgqdX80Ewrxc0oecoa9EnNAUsl8st2lSR0S_4xidPRNx_n4Y1Lyxz");
    izdelaj(nizi, 184, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 185, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 186, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 187, "SGJPXljsSkPflksiAToz9oxkCwgeZr3PXN4SPDbBobr6Ln8PPeA82AZl4aZXp8dKQDAFjyu_2Awe10EWaVS1H1sdrQM7Nw5rg3J");
    izdelaj(nizi, 188, "_vvC6_Qln8wj4Elu");
    izdelaj(nizi, 189, "Hx_GV1fux5OYr7ytn4nMY0kuwOtNfIlz");
    izdelaj(nizi, 190, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 191, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 192, "Hx_GV1fux5OYr7ytn4nMY0kuwOtNfIlz");
    izdelaj(nizi, 193, "SGJ_lR_FwSq9r");
    izdelaj(nizi, 194, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 195, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 196, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 197, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 198, "kmhKZbL6jogHbAxcJvsOve2pKp5sHH7j7r");
    izdelaj(nizi, 199, "HGlWYOI5IYu2ffGg91mhiSEiaL331FxqX_KVgEcJIZu3QUO2N4sHrBnCo");
    izdelaj(nizi, 200, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 201, "vnkxecHIrlAQkikHhyfvZbNUGm57JxBYVXqjDBcacJ1ak9FK8MOJIiEHMus8vQI58");
    izdelaj(nizi, 202, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 203, "Df23LO4WVxQzJzSsPFlErfLmCG_SiyoFC5lF4GiXOzo93QDAMwv");
    izdelaj(nizi, 204, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 205, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 206, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 207, "WVyL5WwGy7CnVM3J0sTG4Yz2lWhENwhOHxfi7M");
    izdelaj(nizi, 208, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 209, "lk_Q9hjkOdzadNaBRixU65h4Rt4EXL4o7QDfX");
    izdelaj(nizi, 210, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 211, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 212, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 213, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 214, "ey2m31qEvu_GjqTD_7anDi6feQmkKWmAHfH7lOIb2ucfIBcgMJtUHv6eRLT4mgshcHWEFt88y0klPqS");
    izdelaj(nizi, 215, "AQAgqdX80Ewrxc0oecoa9EnNAUsl8st2lSR0S_4xidPRNx_n4Y1Lyxz");
    izdelaj(nizi, 216, "HGlWYOI5IYu2ffGg91mhiSEiaL331FxqX_KVgEcJIZu3QUO2N4sHrBnCo");
    izdelaj(nizi, 217, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 218, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 219, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 220, "bflALpbTt_XXFs5so7xBRnM4XvGuys_BJqJnfnGbTC3MBJiPhNa0Lesurz0LJ");
    izdelaj(nizi, 221, "Hx_GV1fux5OYr7ytn4nMY0kuwOtNfIlz");
    izdelaj(nizi, 222, "Go5e8kSJYRPw2syR4uKv6SWYFuwQQ37kEKNbpZK4");
    izdelaj(nizi, 223, "Ptupkg74fNs1cj4dylglb2h0mphoLLolHy940uz7CfH6E2AmVlbiVOJTHxYT15WNjx8AtO90GagoA0fJ8F");
    izdelaj(nizi, 224, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 225, "kzyBWTZn3lrcRIkgFJSo_6UC6jO6vrHMzDVxk8D6GF9WRWTNxiLfE_Ime3ugcDnPfTV5Uce1JQQ6quknKf278R3j0Uqru");
    izdelaj(nizi, 226, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 227, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 228, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 229, "5HPL6Z5VJipKVeVoFLC53T9qQsko2VOftQ4LHpYQkQb_CEhkluf_RG0gXqKSZSDBYNR6XrL2aVh5GVam0zvrX");
    izdelaj(nizi, 230, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 231, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 232, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");
    izdelaj(nizi, 233, "t5T54lKDs6rbEC1CQPTKwGCpcutKktmy2nDLVlMhXko");
    izdelaj(nizi, 234, "9YvhRvBX_T1TJ4jBaXRXhkQAdak9ZzXf4vc5_IfMitVgMhr47dp4sXbcxmT6i0IZ1f8FOB4ONW9MxVaqyJhsKr5EWe_YYh3j");

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
