const markers = {
  markComment: {
    closure: new RegExp("[‹]", "gm"),
    openure: new RegExp("[›]", "gm")
  },
  markElement: {
    closure: new RegExp("[»]", "gm"),
    openure: new RegExp("[«]", "gm")
  }
};
