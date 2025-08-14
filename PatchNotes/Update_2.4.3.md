Fix node snapping and improved ability for other mods to detect that these nodes are buildables.



----

## Fixed Stuff

<!-- cspell:ignore Bababooie -->
- Decreased snapping range from 2400 -> 400cm, fixing a bug that appeared with [World Grid Snapping Extractors](https://ficsit.app/mod/SnappableExtractors) (altering the node type) and [TFIT](https://ficsit.app/mod/TFIT) (still detecting nodes when you aren't looking anywhere near at them).
  Thanks Bababooie! [#7](https://github.com/budak7273/SatisfactoryBuildableResourceNodes/pull/7)

## Changed Stuff

- Set `mMeshActor` on nodes, allowing other mods to easily identify that the mineable node component belongs to a buildable.
  Thanks Rex! [#5](https://github.com/budak7273/SatisfactoryBuildableResourceNodes/pull/5)
