# SMK - Dareu Full-size Keyboard Support

Modified in 2026 to add support for a full-size keyboard with single-color LEDs.

- A full-size keyboard by Dareu

### Based on:
https://github.com/carlossless/smk.git

Commit: `08f4d0253389551b9ae9aad2464e2d7cacaf662e`

## ⚠️ WARNING ⚠️

- There is no guarantee that this firmware will work.
- If you are flashing the firmware via an HID bootloader instead of a dedicated JTAG programmer, faulty code can easily brick the device.
- I actually turned my own keyboard into a brick while working on this and cried a little. 🥲 Because of that, I cannot provide any support. Please feel free to use this purely as a reference!

## build

```
meson compile -C build dareu_default_smk.hex
```

## Notes

- This work follows the license terms of SMK (Small Mechanical Keyboard Firmware).
- Since this only adds a keyboard profile, I felt a full fork was unnecessary, so I have included only the diff here.
- For more details, please see [SMK on GitHub](https://github.com/carlossless/smk.git)

## Credits

- Based on SMK (Small Mechanical Keyboard Firmware) by [carlossless](https://github.com/carlossless/smk).
