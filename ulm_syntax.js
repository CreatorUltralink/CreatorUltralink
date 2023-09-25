const delimiters = {
  createComment: {
    closure: new RegExp("[‹]", "gm"),
    openure: new RegExp("[›]", "gm")
  },
  createElement: {
    closure: new RegExp("[»]", "gm"),
    openure: new RegExp("[«]", "gm")
  }
};
const voidElements = {
  "audio-file": [
    { "file-source": 1 },
    { "file-format": 1 }
  ],
  "image-file": [
    { "file-source": 1 },
    { "file-format": 1 }
  ],
  "video-file": [
    { "file-source": 1 },
    { "file-format": 1 }
  ]
};
