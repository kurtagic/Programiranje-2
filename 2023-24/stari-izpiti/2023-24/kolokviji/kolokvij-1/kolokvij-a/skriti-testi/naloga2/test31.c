
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
    int n = 233;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 1, "v9SrJbHm0xyjpClU3OtFz_sKNjEgn78V");
    izdelaj(nizi, 2, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 3, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 4, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 5, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 6, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 7, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 8, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 9, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 10, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 11, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 12, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 13, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 14, "fNqdlTIHu8EIqSNH9yayDBmfoxG9XA0VW6m1fhrLBX1TajuWL4UYNPx6XLIXIRuPqmteAl9khb0bH9_EWAXsZMgJGHcbrGl8Up7M");
    izdelaj(nizi, 15, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 16, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 17, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 18, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 19, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 20, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 21, "pdO1CayyVun1");
    izdelaj(nizi, 22, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 23, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 24, "SXyPuuz87ie0FzgfbcrSpaIQ4oTVW5Mx");
    izdelaj(nizi, 25, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 26, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 27, "3qs8rr");
    izdelaj(nizi, 28, "IsAAP8FpY1JXSGlyHqa6utQj9JVRad0e2hu5UboIqMaMJ7LdR86s9dEGXpWshoEGWSv0hwECMrA49hfs");
    izdelaj(nizi, 29, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 30, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 31, "KsRFnMP8jZh97czcQcKI0gbfHQPrZEmLs5TfIrPUbGAuO9CYSIaFiTBhK5f_X4rxl1CP3BP0Lj5FjKjWgv");
    izdelaj(nizi, 32, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 33, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 34, "L5UjH6_Bg7n_VGPz9uQGiQWlx68DwKeOFnbFkszvuy92d3H");
    izdelaj(nizi, 35, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 36, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 37, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 38, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 39, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 40, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 41, "YVsnaUlwiPgk3m14IPB24FT0iz2MrP1XfFxuFuVykNBzlMIKCQAThR2njp");
    izdelaj(nizi, 42, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 43, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 44, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 45, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 46, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 47, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 48, "aSrrBL5GCEfM14A77Dzz6YtX4k");
    izdelaj(nizi, 49, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 50, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 51, "q8KdzHqTIF5lGMtNa");
    izdelaj(nizi, 52, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 53, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 54, "GMDdWVw5tB8l5suGPcrkfrHmch90SXSyO1XrVG2zgBOSfX9ACsnjTMfC8fW6jy5uGqT5f");
    izdelaj(nizi, 55, "1b9UymDLsUijC92WFM7wAtOWTV9");
    izdelaj(nizi, 56, "1b9UymDLsUijC92WFM7wAtOWTV9");
    izdelaj(nizi, 57, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 58, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 59, "iyYLNSmctdJcGQl3U15A4rIXFEVbfIxJsqqFh1B6PWC8P");
    izdelaj(nizi, 60, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 61, "q8KdzHqTIF5lGMtNa");
    izdelaj(nizi, 62, "twZHU9fp2mwSZKcapFwIs7JiJmu_5aFICHcLzaIc0XstMsiAS8k9grXFv");
    izdelaj(nizi, 63, "xkjIC");
    izdelaj(nizi, 64, "M3n6qPEPh3EjV0uuKMDIhEQuRapQ7bzQEV3");
    izdelaj(nizi, 65, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 66, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 67, "Bz8AOTGFSFJHf6qRtXRW9EvAuxd9sX8o1j_wAuQ9C4H5aextru7Hc5AfoMAObNP77ENbUpttWZKkp5DWtVuAsUB38yyw6BS");
    izdelaj(nizi, 68, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 69, "WGumtsm9ga3b");
    izdelaj(nizi, 70, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 71, "uglXz2MXosFfkTqA38");
    izdelaj(nizi, 72, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 73, "q2iG0ALHcJX1rq9DGDHxjyjBeAQPvFOS8bTJT8U3xC");
    izdelaj(nizi, 74, "Bz8AOTGFSFJHf6qRtXRW9EvAuxd9sX8o1j_wAuQ9C4H5aextru7Hc5AfoMAObNP77ENbUpttWZKkp5DWtVuAsUB38yyw6BS");
    izdelaj(nizi, 75, "HWwFjXt6oE_eMpHE5N_4CrLnKJ4XkhstTjlt0itfO5gydgJdrj8BpnAMFSYSeUaEhQJ2q57I2hNYjXGRpvPvyTDcV3o8");
    izdelaj(nizi, 76, "AAyrTYtNp2qX8pvAVFKp42CsFJ");
    izdelaj(nizi, 77, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 78, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 79, "iv6xzcJBNNMb6Uw9gSUFLZN4_qWDkXnp9J4XpTsmbNW");
    izdelaj(nizi, 80, "iv6xzcJBNNMb6Uw9gSUFLZN4_qWDkXnp9J4XpTsmbNW");
    izdelaj(nizi, 81, "q8KdzHqTIF5lGMtNa");
    izdelaj(nizi, 82, "nzG__z9miqQYs4caPEoZduSzZsqNk3KJ5iCbafYmjOb8tdK_EZrlQ4MhrSzmp2C7Y1TWl4sIH9mUvtoFdljOEsim1R5evqBdA");
    izdelaj(nizi, 83, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 84, "rdPSb0VC1iDpRoUg3GLRMrQCBoRVzJJH2kXQoybqI3eAqoB7UURJle5Uv");
    izdelaj(nizi, 85, "sOb_Ot3zOJdbH4c2EODK64gk5sFqxV4rKZfSqxE4fPqMoIILzgCSEmgYtF4DK7LFajbt2Y5N");
    izdelaj(nizi, 86, "1b9UymDLsUijC92WFM7wAtOWTV9");
    izdelaj(nizi, 87, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 88, "B_rogyyx9AVqiP3eOPtolNN2VysBOt87gRFmLW17WeV0RaVS");
    izdelaj(nizi, 89, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 90, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 91, "iyYLNSmctdJcGQl3U15A4rIXFEVbfIxJsqqFh1B6PWC8P");
    izdelaj(nizi, 92, "ZNGyYzgC0jtZfsLd9OCepSIjwCDTDvA8riwnvCQEA5PDW0jKjQfo95CD5eBXM4IHriDW3RvakrGuJ4b7E6DKslmNN2Oy2l");
    izdelaj(nizi, 93, "YVsnaUlwiPgk3m14IPB24FT0iz2MrP1XfFxuFuVykNBzlMIKCQAThR2njp");
    izdelaj(nizi, 94, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 95, "ihZVDPCUEDXBJgcE2l7GTLQxg6r_EPftf6orDkjJAOw7RrTxj7r");
    izdelaj(nizi, 96, "wNzt0J5B9fC6qVMfJ3uWoj317oqC_fUM5Nj7WJb3cMexrTX");
    izdelaj(nizi, 97, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 98, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 99, "OkkWqgnNQZjpDQdw44UwoafIPm1z4R05ShUpXIf_36rgu0ulU9FUfw94ox4bTmUPL1dJVCWM");
    izdelaj(nizi, 100, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 101, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 102, "s0RSOBoIVXgT0wAQphgYlIqIboPDlrdgzG4pfFPO");
    izdelaj(nizi, 103, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 104, "ZNGyYzgC0jtZfsLd9OCepSIjwCDTDvA8riwnvCQEA5PDW0jKjQfo95CD5eBXM4IHriDW3RvakrGuJ4b7E6DKslmNN2Oy2l");
    izdelaj(nizi, 105, "ghw");
    izdelaj(nizi, 106, "MAgB5Hmg0MVsbHyHeH90NUIVjWUqGNMtrMqH22bW3UrI_0geciCSKpip9_7nRTjE8a4dUQvNiughloj54e85uuw2eeC");
    izdelaj(nizi, 107, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 108, "xlwVxykOTYIsd3rOLLq_wcVlmzkDKFMp1NsQmrLxYIj7FIiBCmULt3oXg05CB");
    izdelaj(nizi, 109, "qXLNQ53OS2oeDnOkoeYNxYBanxA0GptW5zXVtyk0SC3KRW8FwTDEIctyLmncvViSU");
    izdelaj(nizi, 110, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 111, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 112, "_Swun5MweAFNSErXz7nnLXvF7vCqAhwz32Dc3rD5");
    izdelaj(nizi, 113, "GonQ4bzE7rVdSt");
    izdelaj(nizi, 114, "2BAu_Z29qXZQXdJgDD3HG7q7Eie7mAt2_1OJQfIalmXM83blctR7tVAXlvMAtPUTq2XnucKi2F_JA_L");
    izdelaj(nizi, 115, "ihZVDPCUEDXBJgcE2l7GTLQxg6r_EPftf6orDkjJAOw7RrTxj7r");
    izdelaj(nizi, 116, "xlwVxykOTYIsd3rOLLq_wcVlmzkDKFMp1NsQmrLxYIj7FIiBCmULt3oXg05CB");
    izdelaj(nizi, 117, "ZNGyYzgC0jtZfsLd9OCepSIjwCDTDvA8riwnvCQEA5PDW0jKjQfo95CD5eBXM4IHriDW3RvakrGuJ4b7E6DKslmNN2Oy2l");
    izdelaj(nizi, 118, "xlwVxykOTYIsd3rOLLq_wcVlmzkDKFMp1NsQmrLxYIj7FIiBCmULt3oXg05CB");
    izdelaj(nizi, 119, "ghw");
    izdelaj(nizi, 120, "anmYHx5f2NXaTx9WVbCzoqXee");
    izdelaj(nizi, 121, "038rXXRfn3YF5tOYKzoQwiUEDaNWTR2tywtazgBl8QJEYXOGjy3XD3LT2x");
    izdelaj(nizi, 122, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 123, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 124, "8MsA6mQeUNWhU4kqnKf8o4NJM3LmVEgOK0mrJnt8vLxzgEg9XDL5tYILAUL45jH6xeoWiYMAprzUxYFpMijAH");
    izdelaj(nizi, 125, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 126, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 127, "pPJWTYi2yvWznW");
    izdelaj(nizi, 128, "ZnR5bkJgtK2AaL4M_waYspofLmG_SQLPCtf4KkXE8dxaqP6XMit6EHH9Q1w8Uj");
    izdelaj(nizi, 129, "ElUE1W5DfET4k1MBiqjL4VXDGqdH_EZtIUUpsYv99zacOPaE2Vc");
    izdelaj(nizi, 130, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 131, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 132, "1b9UymDLsUijC92WFM7wAtOWTV9");
    izdelaj(nizi, 133, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 134, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 135, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 136, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 137, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 138, "hMbrAmp3GTcsA");
    izdelaj(nizi, 139, "lClXNYM6IsOcf_");
    izdelaj(nizi, 140, "000BmdRYx_fB67TNvVRs4AR5tXfQZFAWOKdPgJX_8BLWZhZdASKCV0klmclz8PLEtxdLiC8I0NrAon5x4XG7OcbHuUaocb1PC");
    izdelaj(nizi, 141, "6y");
    izdelaj(nizi, 142, "sKixb2_oMfEdjS");
    izdelaj(nizi, 143, "1b9UymDLsUijC92WFM7wAtOWTV9");
    izdelaj(nizi, 144, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 145, "06TybSTMibniUZXRwcq8ImTVbwQVGdpTYtZpoCPCisTwl7tgj8WtIadysS_R");
    izdelaj(nizi, 146, "FE_YbF6UlUHe9DEHfZnpZ30EEQn3MfSme2yajk4q_GuTZbFfFwndgF");
    izdelaj(nizi, 147, "ZNGyYzgC0jtZfsLd9OCepSIjwCDTDvA8riwnvCQEA5PDW0jKjQfo95CD5eBXM4IHriDW3RvakrGuJ4b7E6DKslmNN2Oy2l");
    izdelaj(nizi, 148, "pdO1CayyVun1");
    izdelaj(nizi, 149, "q8KdzHqTIF5lGMtNa");
    izdelaj(nizi, 150, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 151, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 152, "sOb_Ot3zOJdbH4c2EODK64gk5sFqxV4rKZfSqxE4fPqMoIILzgCSEmgYtF4DK7LFajbt2Y5N");
    izdelaj(nizi, 153, "cLJfjDbbjjdHGpcy13qpCD_vOF9lv83TNQ6A6rznWmu9Vk7DJATSQ");
    izdelaj(nizi, 154, "aQ6O");
    izdelaj(nizi, 155, "hzzPizTTO5jqgjytLrtuP");
    izdelaj(nizi, 156, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 157, "AamBA9iFFLiKXIGBwHAOdTBH1z7KitUi3HcCgVbhBDZbcCSQbzqy83Eo9oa2MbRassQWfcwLCY5H9d");
    izdelaj(nizi, 158, "Z3fkIJxMsH4fLLHXnFv2_6ZvWBY8lhG0SpmxwPLGJo2X6AywOMeLEwovFZWGAD7STfjuzVfMjTJ2Q1Xh87sndSRgiQSwU");
    izdelaj(nizi, 159, "ykG1mkNvj5QzObUZwmgMJAfqlGncoTija7RzJ3IaHLH_8rEwDvah36XqSyb2lM");
    izdelaj(nizi, 160, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 161, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 162, "UtY6_T4ev9sg_hnT7c6fKlJ5Aysr_G1P6fwsTw31Fx__5gxC98wtV4osGkPeSCut3YIU1OEJYyQy9Sluhsu");
    izdelaj(nizi, 163, "ghw");
    izdelaj(nizi, 164, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 165, "2BAu_Z29qXZQXdJgDD3HG7q7Eie7mAt2_1OJQfIalmXM83blctR7tVAXlvMAtPUTq2XnucKi2F_JA_L");
    izdelaj(nizi, 166, "PQWBmU0RdMZH_L3lUID6T61GhTfWAERXN6Uf08RUhspYQqvxq7QTgBq2dceIJHaOxEihPnf8Rep0");
    izdelaj(nizi, 167, "dxL_TpL_lP7RIQDhRJxZCNvgE_8oeiZlOimA3nIbZ13Uy2DoKqKqKjJR6b6PlNbyD1raefh33UU8h7lKS15zFzUuOs7igyA_xMlC");
    izdelaj(nizi, 168, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 169, "NJFQ8iqw9UCxGPOweId5WHgzRlcCZ7DvilWjigsNMi7gmnmDx9Wue8ddVcWs");
    izdelaj(nizi, 170, "FE_YbF6UlUHe9DEHfZnpZ30EEQn3MfSme2yajk4q_GuTZbFfFwndgF");
    izdelaj(nizi, 171, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 172, "LshNCh2dpHIdXfvpFXxoE5qj2y0Q6WMqCZjSOJ3tDfct50J2g");
    izdelaj(nizi, 173, "GWPFt87zvWqtKss_rPN9QASsEu7yC7IXfSAaU7fMnA_zS");
    izdelaj(nizi, 174, "WSXqdf");
    izdelaj(nizi, 175, "FE_YbF6UlUHe9DEHfZnpZ30EEQn3MfSme2yajk4q_GuTZbFfFwndgF");
    izdelaj(nizi, 176, "lClXNYM6IsOcf_");
    izdelaj(nizi, 177, "q2iG0ALHcJX1rq9DGDHxjyjBeAQPvFOS8bTJT8U3xC");
    izdelaj(nizi, 178, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 179, "pRvs4ZaApnpVNsHjXH6a3rNzbDIrVXK1ryGI55BEycpq__MnEpuNCLws3FdtgEpXwGCqPMkfrbqsCaWEsGGFb5Qg5Uq_yQ9");
    izdelaj(nizi, 180, "MWlA1CxE7svFYWk94jVbCJHbY2Kz8wrPt6LwKSFZkMa6kTq93TrXMmWud7dIXpu6h8gPkTkQJcWLfESKEcDd");
    izdelaj(nizi, 181, "UNMkk0Ex0q49xV4OIsxnTNuAz_Bn06vpygLlhzXiVqkJuMqdHNNNAx16oA");
    izdelaj(nizi, 182, "SQWNc3PzGEt2LNJ8szh9SlrJKLqjOs089pNQms0zDCaT6nSfRZHr2AMYJzPOhqfBCznNL32Xxr");
    izdelaj(nizi, 183, "yb3bGMaJl5P1Nat50ziml4UXvOORKIh0RnlXOvvlAe760AwH4yaSkw6Fcd6I_au9crksimMCVLwpIBFLItvnja");
    izdelaj(nizi, 184, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 185, "pdO1CayyVun1");
    izdelaj(nizi, 186, "ijC1JjXZJcEsHZt_cW7X56Grf1UpxUp0C7EhDaVqS0z_IxBigxLnAm299");
    izdelaj(nizi, 187, "lEq5HgJTOfPGFkImGSXRRxAmB70qp858BQpWEwk46JPVx");
    izdelaj(nizi, 188, "ZnR5bkJgtK2AaL4M_waYspofLmG_SQLPCtf4KkXE8dxaqP6XMit6EHH9Q1w8Uj");
    izdelaj(nizi, 189, "NcUpBojpys4xC4oKD96yi2WTgRsk78kOChwx_2I_J3ic3NF18yJ_wtYysRwqPuCMNb5Ul");
    izdelaj(nizi, 190, "Bz8AOTGFSFJHf6qRtXRW9EvAuxd9sX8o1j_wAuQ9C4H5aextru7Hc5AfoMAObNP77ENbUpttWZKkp5DWtVuAsUB38yyw6BS");
    izdelaj(nizi, 191, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 192, "RTcH7fV6x0f4HcC7_qzze71Lh1BLqg4sbbJpxFUzMqxD6YCxPGcP7");
    izdelaj(nizi, 193, "z3509fnTRZF65dwPASvHtFFeEAXjg9mI4bC89ddrExaWMDwutd6EfXZ2iZxO9R4TNbAX9vK");
    izdelaj(nizi, 194, "UtY6_T4ev9sg_hnT7c6fKlJ5Aysr_G1P6fwsTw31Fx__5gxC98wtV4osGkPeSCut3YIU1OEJYyQy9Sluhsu");
    izdelaj(nizi, 195, "1ezqjSy_NdQXmlRWaDS13OKqDIfLsTSPErNeClWvVSTh0TuELJTdua6mdj_NLpDGrUGu0R26");
    izdelaj(nizi, 196, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 197, "nM32UYyAOS9Nnc_chxRaaQh9B2CVF2");
    izdelaj(nizi, 198, "oDrPxs3xD7FSBKwuRDG2qpPKLFzE97aHR65U1W8Sqs");
    izdelaj(nizi, 199, "rdPSb0VC1iDpRoUg3GLRMrQCBoRVzJJH2kXQoybqI3eAqoB7UURJle5Uv");
    izdelaj(nizi, 200, "MbxVcHqTWE8LeMxcjg0S1b");
    izdelaj(nizi, 201, "ghw");
    izdelaj(nizi, 202, "FE_YbF6UlUHe9DEHfZnpZ30EEQn3MfSme2yajk4q_GuTZbFfFwndgF");
    izdelaj(nizi, 203, "GmRfXJBJCj9xm2ifYFD_8gncaR435b7OmKxK30dWdlC4v_aaIzrPtugeaPShtIlNgJoIu1vRsgoA9f0canyFIdU");
    izdelaj(nizi, 204, "sKixb2_oMfEdjS");
    izdelaj(nizi, 205, "Jg1bMJP0AZOKnnl4vbI7Xzrwbl2F3EVt_ews0m8QieBX68LowkjHonG9o5");
    izdelaj(nizi, 206, "IsAAP8FpY1JXSGlyHqa6utQj9JVRad0e2hu5UboIqMaMJ7LdR86s9dEGXpWshoEGWSv0hwECMrA49hfs");
    izdelaj(nizi, 207, "wNzt0J5B9fC6qVMfJ3uWoj317oqC_fUM5Nj7WJb3cMexrTX");
    izdelaj(nizi, 208, "iv6xzcJBNNMb6Uw9gSUFLZN4_qWDkXnp9J4XpTsmbNW");
    izdelaj(nizi, 209, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 210, "pdO1CayyVun1");
    izdelaj(nizi, 211, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 212, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 213, "8KNV0yJ");
    izdelaj(nizi, 214, "MbxVcHqTWE8LeMxcjg0S1b");
    izdelaj(nizi, 215, "MSWUs0VPcyinH89H63dbqu3SorrGl5vaLReBgPkyyb5dRidHc_xV6hfHTa6bkDOqa8an7TVEVAjkC1sQWP");
    izdelaj(nizi, 216, "ghw");
    izdelaj(nizi, 217, "NcUpBojpys4xC4oKD96yi2WTgRsk78kOChwx_2I_J3ic3NF18yJ_wtYysRwqPuCMNb5Ul");
    izdelaj(nizi, 218, "z_ur77IpAYqmxzqAssS5TOqUQuL0VfJCZHrI6uRRLo6HL_S8pAJQNddUVNfvCyppBzAjdd30AWLs7CZj");
    izdelaj(nizi, 219, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 220, "8MsA6mQeUNWhU4kqnKf8o4NJM3LmVEgOK0mrJnt8vLxzgEg9XDL5tYILAUL45jH6xeoWiYMAprzUxYFpMijAH");
    izdelaj(nizi, 221, "DEyyymPsQBBY7CYHlUOATmNCCf51zKE3EavDHXgS7mXCWbbBjFt");
    izdelaj(nizi, 222, "kbGmEIy");
    izdelaj(nizi, 223, "21xYwPcVM8_1MNf1WdNfN3");
    izdelaj(nizi, 224, "fNqdlTIHu8EIqSNH9yayDBmfoxG9XA0VW6m1fhrLBX1TajuWL4UYNPx6XLIXIRuPqmteAl9khb0bH9_EWAXsZMgJGHcbrGl8Up7M");
    izdelaj(nizi, 225, "45LSevGhHJOheU4bYS56u6WYjNrt94SkmC7lfn_cJFhI9_lljqheamuOCYRTEjS5oCE0Q9oV1PuJna_");
    izdelaj(nizi, 226, "q2iG0ALHcJX1rq9DGDHxjyjBeAQPvFOS8bTJT8U3xC");
    izdelaj(nizi, 227, "6qD8S2j80XfcChqKQNklgEWIgcnIF8bsX4cTXOZZEAXhgB1Xkui6WrLVYPCbRHgooK_iZ8ASSy");
    izdelaj(nizi, 228, "tcJWkFR3JnAL7wVF4jMYr4");
    izdelaj(nizi, 229, "jUiXssTDY8kzzNspvXIFHB7VV46W_UFA5NnLjsWxpguFSz3gTPK2_EWEEIR1kcH_j");
    izdelaj(nizi, 230, "MCmfdHVJ3a78v6NPdl2JdSwAKXbI1ZIlOntqkMBsd6AubsxhnwEDOwoPzILhtL2EXbVxerGL6gG8kQSz");
    izdelaj(nizi, 231, "ghw");
    izdelaj(nizi, 232, "1b9UymDLsUijC92WFM7wAtOWTV9");

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
