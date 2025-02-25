
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
    int n = 343;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 1, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 2, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 3, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 4, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 5, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 6, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 7, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 8, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 9, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 10, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 11, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 12, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 13, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 14, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 15, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 16, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 17, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 18, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 19, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 20, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 21, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 22, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 23, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 24, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 25, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 26, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 27, "QhgeBTkcNZWCqE4v0afwLXObSVh7vNGHZfgnkxEKB2ljnLecNY4Jpxqfxgq3l8obd");
    izdelaj(nizi, 28, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 29, "bVfW4wscQeGHq59RNs4w72jY");
    izdelaj(nizi, 30, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 31, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 32, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 33, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 34, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 35, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 36, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 37, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 38, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 39, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 40, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 41, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 42, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 43, "ACsMG");
    izdelaj(nizi, 44, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 45, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 46, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 47, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 48, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 49, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 50, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 51, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 52, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 53, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 54, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 55, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 56, "odfGXNT6OVJfWVPZw3UboCmEeuXFX_SIGonO9DSvZFdaP7Lgt9EbcRN4a2kOghrImkyIA2_MHKLq6e");
    izdelaj(nizi, 57, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 58, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 59, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 60, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 61, "AudeZXbLsp7uhffn8n4VKDTgzd5vcpQyjuq8YzC5luOLPKz3EcSosnEsp_n0qrZXK7mpkAbw7BrUsAd");
    izdelaj(nizi, 62, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 63, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 64, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 65, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 66, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 67, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 68, "rddxcXr5wh2yY1CoQql3JiE2uCQS89_KmvASez");
    izdelaj(nizi, 69, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 70, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 71, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 72, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 73, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 74, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 75, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 76, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 77, "tEhbVvfYTDq0xwIszvTSU");
    izdelaj(nizi, 78, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 79, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 80, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 81, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 82, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 83, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 84, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 85, "MPM4mg3QNc9q1kcPcedikR0L7_hCiYFRre25wfuXuJ6z9QvU2F1zlKqI");
    izdelaj(nizi, 86, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 87, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 88, "IeMApSyXXDoQPMZyd8kP_yMS8CcBXxrx5SyyoKx8uXwL5x_ZRM7MnrjxXoJhqwoCbh8qZUXWZci94zsdg");
    izdelaj(nizi, 89, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 90, "ACsMG");
    izdelaj(nizi, 91, "tEhbVvfYTDq0xwIszvTSU");
    izdelaj(nizi, 92, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 93, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 94, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 95, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 96, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 97, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 98, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 99, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 100, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 101, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 102, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 103, "YdwbDEzBNgqc3wq8ufs85ieJLZXTGhlF");
    izdelaj(nizi, 104, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 105, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 106, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 107, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 108, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 109, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 110, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 111, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 112, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 113, "SrqyYXvTkahGHxeN3_L58FrAO");
    izdelaj(nizi, 114, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 115, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 116, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 117, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 118, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 119, "bVfW4wscQeGHq59RNs4w72jY");
    izdelaj(nizi, 120, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 121, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 122, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 123, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 124, "jQoI9QcukO6fHMbA_sIsWV5kT");
    izdelaj(nizi, 125, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 126, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 127, "jotOB1_B5MomBI32LjvQvhA3mEU44Y2lNxOpLuQye_YIILDadbdYEqXPHCQKTaMjVYfJI");
    izdelaj(nizi, 128, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 129, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 130, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 131, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 132, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 133, "dKKaAboA9E9Tg_h19g6nQv6XfzVGNbFkrvXDECe3JzPLfJTpBUDwSmVuPZLd48Plz5WmTkUtaYsFTCnHoT0DUnj40gLXifptKnqi");
    izdelaj(nizi, 134, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 135, "SrqyYXvTkahGHxeN3_L58FrAO");
    izdelaj(nizi, 136, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 137, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 138, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 139, "j7L7n5PB3vRaBR9JzI5owc4inYbDEtEYgLGMIQu2g2yYIs2xUuK7Sl1HovmB28U5jQB0c9_wmcuk4yDPkEIJL8VFmA");
    izdelaj(nizi, 140, "SrqyYXvTkahGHxeN3_L58FrAO");
    izdelaj(nizi, 141, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 142, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 143, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 144, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 145, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 146, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 147, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 148, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 149, "IeMApSyXXDoQPMZyd8kP_yMS8CcBXxrx5SyyoKx8uXwL5x_ZRM7MnrjxXoJhqwoCbh8qZUXWZci94zsdg");
    izdelaj(nizi, 150, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 151, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 152, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 153, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 154, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 155, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 156, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 157, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 158, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 159, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 160, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 161, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 162, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 163, "IeMApSyXXDoQPMZyd8kP_yMS8CcBXxrx5SyyoKx8uXwL5x_ZRM7MnrjxXoJhqwoCbh8qZUXWZci94zsdg");
    izdelaj(nizi, 164, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 165, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 166, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 167, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 168, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 169, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 170, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 171, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 172, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 173, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 174, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 175, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 176, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 177, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 178, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 179, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 180, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 181, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 182, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 183, "6B6Fp110GWqWDpiSP3HrixVEAXGFqTcjVsrm3baVP2DFZZgLyL5k_BIps_rkh5ZHP");
    izdelaj(nizi, 184, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 185, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 186, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 187, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 188, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 189, "N1NSNbeCTWIEbkncV2eNazHnAnUJ9eSw1MQ5FKkuh512ZCcoWZ0VuyoY46I");
    izdelaj(nizi, 190, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 191, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 192, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 193, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 194, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 195, "q8C4TzvlBBFkv4qMOzilj_p6JqhgNRPuvpTvwwB_KhEPmCXfC2ep12HvVaMhG5sH59EurDns8LPQdgCWRuBV9kbFnYP7");
    izdelaj(nizi, 196, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 197, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 198, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 199, "SrqyYXvTkahGHxeN3_L58FrAO");
    izdelaj(nizi, 200, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 201, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 202, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 203, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 204, "PcBfMsdZv1gU89pTM6X_GgBxs4ZAeMK6z0WcF");
    izdelaj(nizi, 205, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 206, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 207, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 208, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 209, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 210, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 211, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 212, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 213, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 214, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 215, "jotOB1_B5MomBI32LjvQvhA3mEU44Y2lNxOpLuQye_YIILDadbdYEqXPHCQKTaMjVYfJI");
    izdelaj(nizi, 216, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 217, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 218, "DOxMHaJKBSNfR6n1UE9pmg8q4o0RhIYXZC6ri");
    izdelaj(nizi, 219, "wilp02scY5r7w_sDEKN3BWyiIWKPmq");
    izdelaj(nizi, 220, "AJH9CouuQfNLCIs8cK");
    izdelaj(nizi, 221, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 222, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 223, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 224, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 225, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 226, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 227, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 228, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 229, "j7L7n5PB3vRaBR9JzI5owc4inYbDEtEYgLGMIQu2g2yYIs2xUuK7Sl1HovmB28U5jQB0c9_wmcuk4yDPkEIJL8VFmA");
    izdelaj(nizi, 230, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 231, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 232, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 233, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 234, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 235, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 236, "jotOB1_B5MomBI32LjvQvhA3mEU44Y2lNxOpLuQye_YIILDadbdYEqXPHCQKTaMjVYfJI");
    izdelaj(nizi, 237, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 238, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 239, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 240, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 241, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 242, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 243, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 244, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 245, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 246, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 247, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 248, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 249, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 250, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 251, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 252, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 253, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 254, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 255, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 256, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 257, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 258, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 259, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 260, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 261, "32kNnN");
    izdelaj(nizi, 262, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 263, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 264, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 265, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 266, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 267, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 268, "KAQOdnzcg2jIMWgJHWCQ9ycGqepbqUgcFfbYQngZ3FRWKxy_q29YOhTpTW3Dg6iY");
    izdelaj(nizi, 269, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 270, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 271, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 272, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 273, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 274, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 275, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 276, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 277, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 278, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 279, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 280, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 281, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 282, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 283, "j7L7n5PB3vRaBR9JzI5owc4inYbDEtEYgLGMIQu2g2yYIs2xUuK7Sl1HovmB28U5jQB0c9_wmcuk4yDPkEIJL8VFmA");
    izdelaj(nizi, 284, "MPM4mg3QNc9q1kcPcedikR0L7_hCiYFRre25wfuXuJ6z9QvU2F1zlKqI");
    izdelaj(nizi, 285, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 286, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 287, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 288, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 289, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 290, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 291, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 292, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 293, "WWeZ9bmGzGzkT59dpTXHyColTwYUIu4Jl");
    izdelaj(nizi, 294, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 295, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 296, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 297, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 298, "mpK_hKy6U2rdj6GqTTpykR7Bj3JJWiWKSbvoFTnBxS4tgXu_3K2uHmFx6iBJdciR2RfAb7OaTZTmbUv5");
    izdelaj(nizi, 299, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 300, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 301, "odfGXNT6OVJfWVPZw3UboCmEeuXFX_SIGonO9DSvZFdaP7Lgt9EbcRN4a2kOghrImkyIA2_MHKLq6e");
    izdelaj(nizi, 302, "q8C4TzvlBBFkv4qMOzilj_p6JqhgNRPuvpTvwwB_KhEPmCXfC2ep12HvVaMhG5sH59EurDns8LPQdgCWRuBV9kbFnYP7");
    izdelaj(nizi, 303, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 304, "odfGXNT6OVJfWVPZw3UboCmEeuXFX_SIGonO9DSvZFdaP7Lgt9EbcRN4a2kOghrImkyIA2_MHKLq6e");
    izdelaj(nizi, 305, "X2ZZEr4nnx_W4YkT2JjFrUGQhGvyo_8PKcc");
    izdelaj(nizi, 306, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 307, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 308, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 309, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 310, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 311, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 312, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 313, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 314, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 315, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 316, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 317, "j7L7n5PB3vRaBR9JzI5owc4inYbDEtEYgLGMIQu2g2yYIs2xUuK7Sl1HovmB28U5jQB0c9_wmcuk4yDPkEIJL8VFmA");
    izdelaj(nizi, 318, "q8C4TzvlBBFkv4qMOzilj_p6JqhgNRPuvpTvwwB_KhEPmCXfC2ep12HvVaMhG5sH59EurDns8LPQdgCWRuBV9kbFnYP7");
    izdelaj(nizi, 319, "wilp02scY5r7w_sDEKN3BWyiIWKPmq");
    izdelaj(nizi, 320, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 321, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 322, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 323, "_s8_ohTvz_QnHgLaoNGaTFJG4_5D5lRJLzFrqVie4eTFfNpobsUZRKNa5BW9xFwdPHsOveNGWpSupnuG4ZImS3KKB_qpFCu");
    izdelaj(nizi, 324, "kKkyXCi6KThnZTeBtlnlp2baQ_vYFaq7Kcfywqk0Y");
    izdelaj(nizi, 325, "QrhkDjEGUWbpmp6JdrKKI8R0OEfcK4QLISdL8xFTSTxaN55itojrsqu4iX81oG8iHc9LMIxH1bk");
    izdelaj(nizi, 326, "SrqyYXvTkahGHxeN3_L58FrAO");
    izdelaj(nizi, 327, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 328, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 329, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 330, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 331, "rddxcXr5wh2yY1CoQql3JiE2uCQS89_KmvASez");
    izdelaj(nizi, 332, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 333, "4QWurQ3ltPPdCApuV9IVmcvwW2fTJ6fl5PcZ1bVO2rT27sSDZDE67qDQlqGvDt8_MMv");
    izdelaj(nizi, 334, "bVfW4wscQeGHq59RNs4w72jY");
    izdelaj(nizi, 335, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 336, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 337, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 338, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 339, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 340, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 341, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");
    izdelaj(nizi, 342, "pRNTbEBhtDV2gJtWvY33aw3wA4RNMhiV97_THaabgPnuYfTVqrlYfQudKH3MvmFQrmV4T");

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
