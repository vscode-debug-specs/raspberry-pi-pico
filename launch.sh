OPENOCD_DIR=/home/nnyn/pico/openocd

$OPENOCD_DIR/src/openocd \
-s $OPENOCD_DIR/tcl/ \
-f $OPENOCD_DIR/tcl/interface/picoprobe.cfg \
-f $OPENOCD_DIR/tcl/target/rp2040.cfg