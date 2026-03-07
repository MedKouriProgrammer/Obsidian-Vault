---
created: 
tags:
  - Resources/Articles
  - Todo
---

# [Quickly Organize Notes in Obsidian - Obsidian Rocks](https://obsidian.rocks/quick-tip-quickly-organize-notes-in-obsidian/)

There’s a popular concept in the Obsidian community called *MOCs*, or *[Maps of Content](https://obsidian.rocks/maps-of-content-effortless-organization-for-notes/)*.

<font color="#e36c09">What is a MOC? [Pioneered by Nick Milo](https://youtu.be/WUq8Pun28FI), MOCs are notes that primarily link to other notes, giving you an *index*, or a small Table of Contents that you can create for any particular topic. MOCs are one of the best ways to quickly organize notes in Obsidian.</font>

MOCs were revolutionary for me the first time I encountered the idea. It became a *master key* for me, a single idea that opened up all of the doors and allowed my notes room to grow and flourish.

On This Page

-   [1 Why are MOCs so life-changing?](https://obsidian.rocks/quick-tip-quickly-organize-notes-in-obsidian/#Why-are-MOCs-so-life-changing)
    -   [1.1 Obsidian Changed That](https://obsidian.rocks/quick-tip-quickly-organize-notes-in-obsidian/#Obsidian-Changed-That)
-   [2 The Simplest Way to Build a Map of Content](https://obsidian.rocks/quick-tip-quickly-organize-notes-in-obsidian/#The-Simplest-Way-to-Build-a-Map-of-Content)
-   [3 Refining your MOC](https://obsidian.rocks/quick-tip-quickly-organize-notes-in-obsidian/#Refining-your-MOC)

## Why are MOCs so life-changing?

I’ve always struggled to organize my notes. Every note-taking application has its methods for organization, but none ever clicked with me.

Folders are too rigid, tags too flexible. Time and time again I created a basic structure within a new app, but eventually, I would outgrow it, and start to lose notes. I was never able to maintain more than 500 notes or so before I would abandon the project.

Evernote, Drafts, Notion, Apple Notes, Notepad++: no matter the app, I always had this same fundamental problem.

### Obsidian Changed That

My current Obsidian vault has 4,500+ notes in it.

Does it feel like a chaotic mess? No. Surprisingly (to me), the more notes I create, the *more organized it feels*.

How is that possible? <font color="#e36c09">It’s all thanks to linked notes and MOCs.</font>

## The Simplest Way to Build a Map of Content

> Note: This tip requires the use of a community plugin called [Dataview](https://blacksmithgu.github.io/obsidian-dataview/). See [how to use community plugins here](https://obsidian.rocks/how-to-use-community-plugins-in-obsidian/).

I’ve created dozens of MOCs in my vault, and I’ve learned a lot. <font color="#e36c09">One of my favorite ways to build a MOC is by using this single-line Dataview query:</font>

````
```dataview
list from [[]] and !outgoing([[]])
```
````

This small line of code is the best way to quickly organize notes in Obsidian. Feel free to copy/paste into your own vault.

Here’s how it works. Say you want to start organizing your notes on Icelandic Ice Fishing. You can create a MOC for that, and add the above query:

![An example Ice Fishing MOC](https://i0.wp.com/obsidian.rocks/wp-content/uploads/2022/08/icefishing1.png?ssl=1)

If you have Dataview installed, you should see this when you click out of that code block:

![Dataview showing ‘no results found’.](https://i0.wp.com/obsidian.rocks/wp-content/uploads/2022/08/icefishing2.png?ssl=1)

Now it’s time to add some content. Maybe you already have some related notes, or maybe not. <font color="#e36c09">Regardless, next time you find or add a note related to Icelandic Ice Fishing, simply add a link to the MOC. I like to add it to the top of the note, but you can add it anywhere.</font>

![A note about Brown Trout, with a link to the MOC.](https://i0.wp.com/obsidian.rocks/wp-content/uploads/2022/08/icefishing3.png?ssl=1)

![A guide to fishing in Iceland, with a link to the MOC.](https://i0.wp.com/obsidian.rocks/wp-content/uploads/2022/08/icefishing4.png?ssl=1)

<font color="#e36c09">Next time you open up your Icelandic Ice Fishing MOC, Dataview will gather all of the linked notes and display them for you.</font>

![The Icelandic Ice Fishing MOC with the newly created notes showing up.](https://i0.wp.com/obsidian.rocks/wp-content/uploads/2022/08/icefishing5.png?ssl=1)

Now that may be enough for you, you can call it a day there. But there’s *another* step that makes your MOCs *even more useful*.

## Refining your MOC

I like to use this query as an *inbox*, letting me know about new content that I need to sort out further. Once a note appears in my “inbox”, I like to add *supporting content* to further clarify the purpose of each note. Even better, using the above query, when you *manually* add a link to your MOC, Dataview will *automatically* remove it from your inbox.

I usually start by adding headers, and I’ll add even more explanation in paragraphs if necessary. That might look like this:

![A finalized MOC with headers for each subtopic.](https://i0.wp.com/obsidian.rocks/wp-content/uploads/2022/08/icefishing6.png?ssl=1)

And that is the easiest way to quickly organize notes in Obsidian.

> Learn more about MOCs here: [Maps of Content: Effortless organization for notes](https://obsidian.rocks/maps-of-content-effortless-organization-for-notes/)

# Summary