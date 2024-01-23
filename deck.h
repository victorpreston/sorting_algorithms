#ifndef _DECK_H
#define _DECK_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TOTAL 52

/**
 * enum kind_e - Enumeration
 * @SPADE: SPADE value
 * @HEART: HEART value
 * @CLUB: CLUB value
 * @DIAMOND: DIAMOND value
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /*_DECK_H*/
