
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {17, 356, 111, 183, 748, 784, 209, 501, 47, 557, 90, 172, 701, 42, 713, 381, 736, 301, 777, 290, 269, 440, 579, 396, 113, 115, 168, 586, 175, 315, 124, 77, 471, 776, 757, 743, 284, 862, 842, 121, 855, 286, 803, 74, 648, 533, 341, 439, 632, 46, 256, 267, 680, 685, 123, 667, 292, 559, 178, 107, 481, 683, 283, 618, 675, 666, 758, 815, 129, 251, 694, 434, 556, 655, 13, 40, 800, 130, 394, 245, 182, 10, 235, 447, 393, 652, 258, 638, 583, 34, 734, 87, 738, 828, 517, 477, 379, 247, 431, 669, 228, 287, 302, 12, 297, 455, 132, 705, 370, 152, 727, 69, 566, 654, 445, 307, 489, 230, 849, 793, 242, 663, 528, 512, 464, 647, 36, 863, 646, 8, 861, 820, 453, 44, 783, 20, 469, 214, 336, 523, 563, 641, 203, 639, 616, 591, 173, 750, 101, 321, 241, 324, 15, 276, 147, 272, 670, 403, 692, 536, 134, 534, 137, 125, 400, 846, 70, 160, 825, 53, 504, 167, 417, 415, 68, 542, 277, 668, 270, 19, 564, 427, 6, 539, 671, 126, 331, 592, 752, 760, 497, 205, 362, 305, 22, 535, 29, 749, 21, 808, 488, 708, 798, 60, 293, 288, 788, 265, 96, 545, 660, 200, 818, 180, 700, 194, 294, 81, 619, 741, 813, 382, 765, 345, 640, 475, 505, 418, 112, 785, 271, 131, 635, 552, 363, 561, 385, 723, 402, 801, 472, 143, 389, 55, 549, 578, 373, 608, 567, 430, 163, 391, 674, 296, 630, 326, 236, 746, 490, 546, 598, 372, 97, 299, 661, 710, 244, 637, 531, 744, 314, 11, 48, 805, 103, 676, 506, 360, 185, 328, 595, 190, 731, 197, 80, 712, 795, 659, 174, 821, 412, 650, 452, 779, 14, 672, 819, 588, 57, 575, 737, 695, 486, 138, 264, 192, 278, 295, 823, 631, 88, 582, 600, 105, 826, 246, 857, 30, 424, 569, 771, 414, 541, 62, 339, 707, 794, 222, 844, 188, 649, 348, 254, 195, 82, 388, 407, 39, 525, 606, 26, 830, 714, 553, 482, 375, 289, 719, 835, 259, 4, 850, 99, 220, 689, 159, 461, 747, 852, 75, 834, 609, 250, 43, 814, 171, 724, 615, 428, 155, 508, 502, 73, 706, 117, 702, 221, 16, 521, 797, 392, 839, 601, 529, 699, 317, 86, 433, 799, 164, 368, 374, 27, 715, 627, 677, 366, 157, 633, 444, 796, 249, 300, 106, 845, 718, 789, 604, 730, 41, 32, 847, 383, 83, 273, 128, 120, 774, 628, 804, 311, 551, 260, 704, 213, 419, 642, 109, 376, 735, 50, 365, 530, 421, 169, 193, 463, 248, 233, 323, 255, 687, 833, 558, 95, 696, 347, 576, 443, 740, 3, 548, 226, 766, 358, 217, 554, 51, 865, 52, 186, 476, 410, 405, 179, 602, 720, 491, 282, 487, 653, 827, 268, 350, 459, 219, 763, 291, 778, 239, 684, 280, 732, 156, 510, 210, 177, 212, 285, 479, 864, 544, 67, 114, 681, 769, 355, 721, 473, 860, 416, 836, 709, 651, 338, 822, 184, 98, 698, 364, 198, 520, 207, 150, 614, 429, 762, 466, 755, 751, 532, 335, 594, 357, 204, 519, 634, 145, 773, 154, 243, 442, 543, 626, 395, 503, 644, 76, 320, 343, 831, 229, 108, 786, 610, 513, 92, 118, 716, 754, 279, 166, 187, 775, 85, 231, 547, 451, 116, 65, 756, 809, 624, 361, 261, 211, 165, 460, 110, 151, 227, 66, 127, 691, 237, 812, 811, 189, 807, 458, 71, 568, 332, 253, 806, 142, 679, 58, 781, 485, 599, 334, 63, 342, 306, 509, 170, 622, 515, 346, 728, 573, 313, 484, 139, 629, 263, 411, 423, 570, 438, 72, 353, 468, 772, 770, 420, 621, 35, 238, 656, 722, 5, 432, 560, 298, 574, 369, 516, 611, 853, 527, 38, 426, 711, 224, 31, 841, 387, 686, 367, 136, 153, 390, 465, 745, 555, 330, 56, 351, 832, 817, 565, 454, 79, 581, 24, 406, 274, 550, 856, 673, 223, 612, 408, 851, 337, 617, 500, 457, 658, 498, 572, 208, 829, 603, 450, 768, 514, 571, 449, 787, 590, 725, 206, 792, 467, 693, 354, 340, 59, 344, 409, 162, 843, 422, 593, 378, 780, 759, 384, 413, 682, 526, 275, 319, 100, 690, 522, 480, 562, 494, 507, 496, 45, 625, 657, 596, 636, 441, 739, 585, 141, 537, 144, 643, 122, 474, 119, 225, 840, 266, 437, 54, 377, 2, 838, 499, 790, 824, 425, 196, 309, 802, 511, 9, 688, 589, 761, 308, 697, 478, 524, 304, 858, 733, 23, 577, 662, 404, 322, 176, 645, 325, 359, 218, 262, 371, 252, 399, 764, 678, 201, 18, 665, 791, 135, 703, 493, 767, 257, 859, 848, 729, 191, 232, 538, 318, 161, 303, 148, 240, 398, 540, 140, 104, 7, 327, 456, 216, 84, 470, 93, 0, 401, 436, 605, 49, 518, 64, 492, 386, 94, 352, 726, 199, 495, 37, 28, 215, 380, 462, 483, 89, 753, 281, 349, 25, 584, 33, 133, 816, 102, 597, 234, 580, 742, 61, 78, 435, 620, 623, 333, 310, 397, 607, 91, 149, 837, 587, 1, 664, 329, 181, 202, 782, 146, 158, 854, 312, 717, 448, 446, 810, 613};
const int NN[] = {301, 461, 69, 539, 761, 191, 545, 836, 439, 451, 734, 417, 413, 803, 496, 839, 838, 695, 703, 412, 744, 255, 458, 366, 654, 307, 825, 679, 542, 246, 464, 130, 827, 135, 577, 802, 80, 446, 333, 663, 782, 795, 0, 13, 56, 626, 830, 323, 38, 341, 236, 637, 449, 792, 512, 617, 452, 65, 270, 705, 280, 725, 197, 35, 603, 337, 662, 199, 8, 391, 843, 169, 547, 581, 42, 855, 84, 861, 627, 578, 6, 90, 561, 576, 715, 565, 490, 387, 253, 757, 377, 638, 790, 584, 466, 291, 797, 608, 365, 457, 112, 659, 486, 701, 588, 217, 453, 319, 508, 15, 474, 251, 165, 79, 696, 295, 479, 271, 587, 540, 389, 612, 773, 207, 179, 330, 284, 810, 555, 47, 448, 380, 766, 648, 729, 269, 487, 700, 407, 357, 361, 136, 60, 686, 420, 334, 415, 697, 287, 414, 143, 339, 381, 506, 750, 48, 658, 106, 409, 644, 783, 395, 214, 647, 796, 91, 694, 134, 281, 685, 338, 160, 774, 128, 129, 108, 360, 500, 314, 290, 261, 109, 209, 343, 498, 36, 348, 63, 524, 322, 721, 288, 250, 192, 579, 503, 315, 308, 440, 518, 285, 522, 456, 481, 779, 174, 161, 710, 379, 513, 856, 488, 28, 564, 384, 22, 14, 10, 238, 196, 352, 601, 218, 375, 367, 219, 822, 628, 566, 232, 11, 820, 224, 187, 43, 809, 317, 537, 300, 470, 268, 639, 164, 667, 754, 807, 706, 423, 460, 50, 125, 374, 829, 819, 853, 794, 385, 688, 864, 92, 515, 73, 247, 575, 673, 562, 549, 841, 442, 511, 826, 172, 632, 436, 12, 450, 184, 834, 126, 844, 509, 497, 266, 749, 182, 507, 104, 550, 68, 462, 383, 832, 226, 767, 713, 572, 215, 781, 559, 812, 499, 422, 177, 336, 661, 362, 185, 672, 89, 527, 583, 332, 728, 455, 349, 373, 158, 124, 213, 151, 678, 273, 229, 283, 606, 690, 140, 765, 397, 752, 351, 835, 630, 535, 235, 799, 604, 121, 519, 263, 168, 133, 45, 775, 732, 702, 821, 441, 580, 546, 748, 1, 669, 813, 340, 536, 476, 589, 329, 40, 234, 570, 163, 74, 726, 167, 144, 770, 376, 272, 698, 709, 655, 100, 230, 682, 382, 736, 335, 327, 27, 435, 573, 154, 759, 30, 258, 421, 216, 400, 428, 117, 586, 625, 369, 768, 724, 403, 426, 95, 7, 430, 737, 132, 607, 636, 303, 139, 840, 286, 471, 149, 529, 447, 805, 646, 242, 665, 516, 401, 582, 166, 598, 275, 180, 804, 153, 152, 221, 2, 256, 171, 243, 551, 53, 305, 405, 567, 552, 62, 326, 693, 597, 116, 477, 593, 719, 811, 558, 425, 183, 716, 505, 262, 852, 81, 85, 267, 865, 680, 331, 763, 32, 718, 19, 313, 739, 544, 731, 212, 454, 25, 531, 4, 52, 741, 325, 650, 493, 801, 206, 595, 437, 670, 198, 660, 668, 818, 712, 239, 613, 610, 815, 445, 787, 399, 159, 585, 350, 717, 120, 742, 480, 817, 525, 483, 671, 431, 780, 814, 21, 532, 265, 241, 772, 735, 645, 720, 733, 478, 543, 388, 306, 747, 293, 751, 711, 591, 18, 147, 55, 833, 786, 574, 677, 651, 465, 800, 771, 553, 816, 785, 370, 538, 438, 150, 738, 849, 657, 858, 328, 70, 592, 791, 652, 131, 118, 548, 489, 666, 23, 64, 560, 609, 372, 200, 846, 186, 727, 324, 418, 758, 863, 344, 723, 94, 386, 760, 49, 865, 434, 110, 254, 296, 605, 203, 571, 178, 859, 210, 346, 82, 618, 714, 278, 364, 504, 5, 429, 289, 119, 691, 105, 510, 523, 611, 299, 847, 704, 227, 233, 556, 220, 282, 201, 764, 311, 722, 743, 402, 24, 141, 784, 530, 756, 57, 237, 155, 762, 72, 181, 145, 842, 642, 494, 640, 77, 623, 433, 467, 615, 469, 276, 368, 602, 9, 231, 649, 292, 850, 102, 37, 211, 358, 245, 568, 113, 789, 103, 279, 146, 208, 345, 353, 730, 664, 39, 621, 416, 51, 274, 473, 127, 96, 33, 484, 3, 252, 614, 66, 740, 318, 599, 643, 788, 398, 491, 162, 689, 26, 107, 482, 41, 137, 310, 260, 342, 521, 257, 404, 699, 83, 590, 634, 676, 569, 228, 59, 594, 684, 624, 681, 98, 355, 533, 298, 406, 170, 31, 687, 824, 142, 641, 76, 616, 390, 528, 459, 793, 475, 620, 244, 248, 123, 16, 111, 78, 860, 148, 753, 419, 29, 631, 93, 520, 557, 354, 485, 176, 823, 378, 778, 204, 264, 854, 54, 396, 189, 223, 845, 541, 277, 745, 707, 75, 619, 97, 502, 674, 444, 359, 514, 708, 777, 851, 240, 20, 526, 114, 371, 746, 312, 837, 225, 205, 635, 320, 424, 534, 138, 101, 472, 633, 831, 563, 297, 501, 222, 554, 294, 393, 653, 828, 17, 249, 463, 629, 46, 755, 675, 67, 86, 517, 99, 122, 808, 769, 862, 175, 194, 392, 410, 156, 34, 304, 190, 259, 115, 806, 776, 44, 495, 302, 622, 363, 71, 309, 683, 394, 193, 656, 432, 195, 88, 157, 411, 87, 321, 61, 58, 356, 408, 188, 427, 798, 848, 173, 692, 202, 600, 596, 443, 347, 492, 468};
const int RANDOM[] = {416, 739, 788, 769, 743, 707, 598, 715, 289, 560, 631, 828, 398, 578, 599, 144, 81, 293, 345, 492, 388, 716, 130, 245, 278, 105, 47, 635, 257, 799, 210, 517, 69, 498, 665, 700, 592, 368, 149, 657, 487, 732, 743, 710, 52, 113, 452, 313, 383, 322, 587, 141, 363, 145, 752, 329, 678, 845, 659, 48, 36, 755, 185, 691, 752, 199, 456, 6, 512, 631, 151, 306, 684, 180, 376, 258, 385, 292, 461, 363, 481, 457, 699, 79, 516, 855, 5, 361, 624, 854, 126, 727, 330, 853, 235, 240, 796, 270, 539, 529, 256, 58, 111, 407, 569, 172, 141, 188, 437, 425, 269, 473, 819, 678, 738, 200, 129, 799, 863, 473, 41, 119, 4, 109, 445, 535, 95, 141, 152, 648, 89, 518, 20, 498, 505, 90, 739, 390, 682, 673, 808, 794, 558, 336, 553, 272, 284, 77, 130, 194, 535, 541, 23, 476, 376, 120, 656, 865, 436, 376, 686, 300, 683, 739, 470, 495, 616, 44, 407, 26, 814, 329, 555, 274, 804, 818, 166, 267, 341, 643, 331, 235, 496, 704, 366, 419, 447, 395, 39, 102, 558, 854, 13, 479, 178, 78, 222, 205, 816, 181, 484, 808, 297, 581, 344, 7, 106, 631, 86, 436, 459, 631, 94, 350, 527, 308, 464, 593, 140, 223, 156, 382, 639, 205, 15, 490, 228, 80, 118, 799, 578, 179, 75, 89, 673, 653, 87, 776, 21, 400, 532, 574, 216, 753, 77, 474, 340, 841, 260, 239, 455, 549, 825, 664, 706, 337, 380, 445, 493, 29, 555, 771, 68, 425, 434, 798, 445, 561, 676, 480, 794, 754, 25, 667, 267, 58, 691, 725, 787, 791, 321, 863, 384, 406, 634, 132, 107, 711, 701, 392, 132, 42, 823, 736, 607, 637, 262, 674, 829, 712, 448, 647, 268, 798, 616, 686, 217, 570, 412, 699, 808, 590, 747, 684, 767, 693, 40, 233, 281, 111, 133, 813, 375, 47, 478, 101, 70, 162, 378, 580, 386, 548, 84, 770, 33, 51, 348, 471, 701, 844, 365, 491, 60, 414, 484, 91, 805, 413, 273, 381, 164, 305, 517, 619, 397, 183, 712, 428, 326, 263, 561, 303, 105, 802, 550, 181, 836, 693, 668, 800, 776, 138, 603, 86, 343, 652, 123, 562, 254, 593, 749, 719, 310, 401, 613, 246, 250, 186, 711, 682, 814, 512, 604, 777, 282, 290, 616, 650, 133, 217, 323, 435, 265, 743, 518, 210, 554, 587, 310, 830, 824, 305, 348, 714, 490, 666, 623, 74, 98, 727, 575, 762, 625, 314, 401, 509, 574, 279, 277, 263, 862, 230, 430, 458, 535, 486, 796, 791, 86, 103, 297, 28, 180, 315, 660, 294, 483, 855, 508, 208, 498, 486, 504, 115, 202, 15, 342, 458, 577, 129, 326, 765, 822, 179, 597, 488, 160, 609, 489, 40, 95, 465, 137, 724, 184, 233, 152, 173, 489, 695, 206, 548, 761, 545, 621, 850, 698, 816, 468, 112, 111, 236, 363, 132, 228, 94, 215, 392, 6, 832, 671, 55, 456, 47, 700, 863, 105, 629, 129, 518, 644, 717, 7, 797, 489, 768, 645, 361, 504, 216, 835, 357, 674, 534, 348, 456, 330, 847, 695, 227, 782, 289, 574, 777, 116, 360, 664, 345, 445, 210, 574, 779, 391, 832, 172, 15, 241, 47, 689, 413, 336, 371, 363, 106, 96, 565, 571, 127, 807, 756, 800, 128, 7, 799, 792, 553, 345, 616, 671, 579, 18, 733, 757, 783, 720, 484, 27, 179, 540, 728, 668, 540, 178, 245, 19, 599, 736, 779, 254, 110, 97, 477, 301, 853, 58, 63, 783, 151, 604, 133, 108, 460, 571, 31, 267, 287, 751, 294, 859, 61, 560, 186, 668, 153, 293, 279, 275, 664, 406, 577, 832, 378, 92, 821, 774, 680, 430, 844, 300, 284, 663, 429, 811, 280, 314, 777, 277, 181, 553, 49, 399, 846, 283, 24, 146, 737, 534, 517, 755, 165, 485, 705, 406, 850, 1, 648, 737, 171, 683, 206, 123, 57, 582, 842, 432, 342, 327, 41, 20, 760, 680, 368, 794, 461, 127, 159, 731, 837, 425, 615, 825, 6, 368, 415, 563, 517, 179, 453, 328, 56, 253, 424, 299, 778, 465, 178, 773, 388, 581, 383, 137, 620, 832, 498, 223, 748, 187, 794, 276, 190, 767, 639, 179, 229, 744, 154, 827, 351, 250, 401, 658, 222, 395, 397, 666, 745, 281, 270, 96, 105, 385, 638, 602, 609, 549, 583, 566, 610, 64, 422, 124, 165, 385, 222, 86, 524, 43, 568, 404, 234, 115, 642, 844, 665, 160, 687, 491, 312, 175, 171, 611, 699, 459, 146, 334, 15, 720, 7, 399, 79, 759, 768, 687, 740, 184, 244, 794, 481, 863, 429, 761, 396, 792, 129, 654, 404, 458, 457, 723, 667, 155, 79, 742, 548, 88, 442, 31, 366, 86, 198, 441, 229, 527, 602, 797, 339, 675, 218, 78, 435, 153, 326, 83, 375, 80, 39, 511, 471, 694, 480, 120, 843, 217, 675, 421, 665, 235, 674, 705, 684, 861, 68, 591, 319, 5, 71, 682, 701, 263, 699, 40, 745, 113, 219, 580, 194, 469, 822, 721, 277, 535, 569, 683, 191, 605, 760, 179, 395, 241, 727, 100, 680, 737, 184, 432};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 316;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->nn = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->nn == v[NN[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}