## Exercise Lasser cutter control

Consider the control of a laser cutter that operates in a 2d fashion using (0,0) as the lower-left corner of the work area.

The constructor of the `laserCutterControl` class takes the size of the work area and `set_workpiece_size()` and allows placing a workpiece that fits into that area.

Coordinates are absolute and must fit in the area. While we can start at coord(0,0) the maximum x coordinate is `area.horizontal_width - 1` and correspondingly the maximu y coordinate is `area.vertical_length -1`.

Trying to cut beyond the work piece (that is fixed at coord(0,0)) or trying to cut or move beyond the table of the laser cutter is an error and should be signaled and the operation ignored. 

What test cases would you write? Provide appropriate test case names that tell what they (would) actually test.

```C++
struct coord {
  double x{}; // horizontal
  double y{}; // vertical
};
struct area {
  double horizontal_width{};
  double vertical_length{};
};
struct laserCutterControl {
  laserCutterControl(area tablesize); 

[[nodiscard]] bool moveTo(coord) &; // return true on success 
[[nodiscard]] bool cutTo(coord)  &;  // return true on success 
[[nodiscard]] bool set_workpiece_size(area) &;

  area table_size() const;
  area workpiece_size() const;
  
// further details private
};
```


Look at the following questions when you consider yourself done!

* Did you think of what happens if the area contains negative values? Discuss where to check that!
* Did you consider what happens if you want to place a new workpiece while the position of the cutter is over the workpiece?
* Where would you implement the coordinate and area sanity checks?