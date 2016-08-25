#include "TextPost.h"

Boolean initialize_text_post(TextPost* textPost)
{
    textPost->type = PostTypeText;
    textPost->author = "Brian Michel & Ken";
    textPost->body = "Just a bunch of text to go here whatever";

    return true;
}

Boolean initialize_text_post_full(TextPost* textPost, Char* author, Char* body)
{
    textPost->type = PostTypeText;
    textPost->author = author;
    textPost->body = body;

    return true;
}

Boolean destroy_text_post(TextPost* textPost)
{
    //TODO dynamically deallocate strings
    return true;
}
