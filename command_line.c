#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* 
 * Function: display_help
 * -----------------------
 * Prints a detailed help guide for the program.
 * Provides information on usage, options, and game rules.
 * 
 * Parameters: None
 * Returns: None
 */
void display_help(){
    char help_txt[] =
        "\nBlackjack Game Help\n"
        "Usage:\n"
        "./gui_blackjack"

        "Game Overview:\n"
        "  - The goal of Blackjack is to have a hand value closet to 21, without exceeding 21 (busting).\n"
        "  - You start with a balance of $500.\n\n"

        "Gameplay:\n"
        "  1. Place a bet for the current round. The default bet is $100.\n"
        "  2. You will be dealt two cards to start.\n"
        "  3. You can:\n"
        "     - 'Hit' to draw another card.\n"
        "     - 'Stand' to end your turn and keep your current hand.\n"
        "  4. The dealer will draw cards until their hand value is 17 or higher.\n"
        "  5. Results are determined based on the following rules:\n"
        "     - Bust: If your hand value exceeds 21, you lose your bet.\n"
        "     - Blackjack: If your initial hand is exactly 21, you win 2x your bet.\n"
        "     - Push: If your hand value matches the dealer's, you get your bet back.\n"
        "     - Higher Value: If your hand value is higher than the dealer's, you win 2x your bet.\n\n"

        "Key Points:\n"
        "  - Aces are worth 11 points but can count as 1 if it helps avoid a bust.\n"
        "  - Face cards (Jack, Queen, King) are worth 10 points.\n"
        "  - Number cards are worth their face value.\n"

        "Ending the Game:\n"
        "  - The game continues until you choose to stop or you run out of balance.\n";

    printf("%s", help_txt);
}
